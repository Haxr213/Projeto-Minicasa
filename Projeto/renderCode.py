import bpy
import mathutils

scene = bpy.context.scene
scene_obj = bpy.context.collection
conf = bpy.data

#Configura a renderização de imagens utilizando as seguintes resoluções
#   Mude os dados para adquirir imagens com mais ou menos resolução
#   As medidas sao em pixels
conf.scenes[0].render.resolution_x = 3840
conf.scenes[0].render.resolution_y = 2160



#Cria uma camera de acordo com os dados de location e rotation
def create_camera(scene, scene_obj, location, rotation):

    cam_data = bpy.data.cameras.new('camera')
    cam = bpy.data.objects.new('camera', cam_data)
    scene_obj.objects.link(cam)
    scene.camera = cam

    cam.location = location
    cam.rotation_euler =  rotation

#Cria luzes para a renderização
def create_light(power, scene_obj, lightlocation):
   
    light_data = bpy.data.lights.new(name="light", type='POINT')
    light_data.energy = power


    light_object = bpy.data.objects.new(name = "light", object_data = light_data)

   
    scene_obj.objects.link(light_object)

   
    bpy.context.view_layer.objects.active = light_object

    
    light_object.location = lightlocation


#Remove demais cameras para evitar erros na renderização
def clear_scene():
    bpy.ops.object.select_all(action = 'DESELECT')
    bpy.ops.object.select_by_type(type = 'CAMERA')
    bpy.ops.object.delete()
    bpy.ops.object.select_by_type(type = 'LIGHT')
    bpy.ops.object.delete()



clear_scene()

location = mathutils.Vector((3, 3, 20)) #vista superior
rotation = mathutils.Euler((0, 0, 0))
create_camera(scene, scene_obj, location, rotation)

location = mathutils.Vector((3, -13, 2.5)) #vista frontal
rotation = mathutils.Euler((-48.69, 0, 0))
create_camera(scene, scene_obj, location, rotation)

location = mathutils.Vector((3, 19, 2.5)) #vista de fundo/tras
rotation = mathutils.Euler((48.69, 135.09, 0))
create_camera(scene, scene_obj, location, rotation)


location = mathutils.Vector((19, 3, 2.2)) #vista lateral direita
rotation = mathutils.Euler((190.09, 0, -48.69))
create_camera(scene, scene_obj, location, rotation)

location = mathutils.Vector((-13, 3, 2.2)) #vista lateral esquerda
rotation = mathutils.Euler((190.09, 0, 48.69))
create_camera(scene, scene_obj, location, rotation)

location = mathutils.Vector((-10, -10, 10)) #vista em perspectiva
rotation = mathutils.Euler((20, 0, 150.02))
create_camera(scene, scene_obj, location, rotation)


#Criação das luzes da cena

power = 1500
lightlocation = (-5, 3, 8)

create_light(power, scene_obj, lightlocation)

power = 500
lightlocation = (2, 2, 8)

create_light(power, scene_obj, lightlocation)

power = 500
lightlocation = (10, 2, 8)

create_light(power, scene_obj, lightlocation)

power = 300
lightlocation = (3, -5, 8)

create_light(power, scene_obj, lightlocation)


i = 0

#Faz a renderização das vistas por meio das cameras
for ob in scene.objects:
    if ob.type == 'CAMERA':
        bpy.context.scene.camera = ob
        name = "view" + str(i)
        i += 1
        file = "C:\\Users\\haxr7\\OneDrive\\Área de Trabalho\\Resources\\Render\\" + name
        scene.render.filepath = file
        bpy.ops.render.render( write_still= True)
