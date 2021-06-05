import bpy
#Versao f1

#Alterar a pasta de destino de acordo com a localização em seu computador
materialsFolder = "C:\\Users\\haxr7\\OneDrive\\Área de Trabalho\\Resources\\Materials\\"

#Constroi um plano a partir dos vertices informados
def build_plane(vertices, edges, imgMat):
    
    faces=[(0,1,2,3)]
    
    mesh = bpy.data.meshes.new("meshPlane");
    
  
    mesh.from_pydata(vertices,edges,faces)
    mesh.update()

    object = bpy.data.objects.new("objectPlane", mesh)
    assign_material(object, imgMat)

   
    
        
    view_layer = bpy.context.view_layer
    view_layer.active_layer_collection.collection.objects.link(object)
    
    
#Constroi um objeto semelhante a um cubo a partir dos vertices informados
def build_cube(vertices, edges, imgMat):
    
    faces=[(0,1,2,3), (4,5,6,7), (0,4,7,3), (0,1,5,4), (1,2,6,5), (7,6,2,3)]
    
    mesh = bpy.data.meshes.new("meshCube");
    
  
    mesh.from_pydata(vertices,edges,faces)
    mesh.update()

    object = bpy.data.objects.new("objectCube", mesh)
    
    assign_material(object, imgMat)
    

    view_layer = bpy.context.view_layer
    view_layer.active_layer_collection.collection.objects.link(object)
        
        
#Constroi um objeto 'customizado' a partir das faces e vertices informados
def build_custom(vertices, edges, faces, imgData):
    
    mesh = bpy.data.meshes.new("meshCustom");
    
  
    mesh.from_pydata(vertices,edges,faces)
    mesh.update()

    object = bpy.data.objects.new("objectCustom", mesh)
    assign_material(object, imgMat)

    
    view_layer = bpy.context.view_layer
    view_layer.active_layer_collection.collection.objects.link(object)
    
    
#Constroi um objeto 'customizado' a partir das faces e vertices informados,
#e aplica um modificador wireframe 
def build_frame(vertices, edges, faces, imgData):
    mesh = bpy.data.meshes.new("meshOfFrame");
    
  
    mesh.from_pydata(vertices,edges,faces)
    mesh.update()

    object = bpy.data.objects.new("objectFrame", mesh)
    assign_material(object, imgMat)
    
    object.modifiers.new("frameForm", 'WIREFRAME')
    
    
    view_layer = bpy.context.view_layer
    view_layer.active_layer_collection.collection.objects.link(object)
    
    
    
# Atribui o material, segundo imagem em pasta 
def assign_material(object, imgMat):
    
    mat = bpy.data.materials.new(name = "New_Mat")
    mat.use_nodes = True
    bsdf = mat.node_tree.nodes["Principled BSDF"]
    texImage = mat.node_tree.nodes.new('ShaderNodeTexImage')
    texImage.image = bpy.data.images.load(imgMat)
    mat.node_tree.links.new(bsdf.inputs['Base Color'], texImage.outputs['Color'])
    
    if object.data.materials:
        object.data.materials[0] = mat
    else:
        object.data.materials.append(mat)


#Jardim
vertices=[(0,0,0),(0,3,0),(3,3,0),(3,0,0)]
edges=[]
imgMat = materialsFolder + "grass.jpg"

build_plane(vertices,edges, imgMat)


#Porta da casa
#Dimensões da porta (0.9 x 2.1 x 0.011m)
ma = 0.05 #espaçamento entre a parede e a porta, resultando em 0.9
b = 2.1
c = 0.011

vertices=[(4 + ma, 0,0 ),(4 + ma, c, 0),(5 - ma,c,0),(5 - ma, 0, 0), (4 + ma, 0, b), (4 + ma, c, b), (5 - ma, c, b), (5 - ma, 0, b)]
edges=[]
imgMat = materialsFolder + "door.jpg"


build_cube(vertices, edges, imgMat)

#Poligono - parte frontal da casa
na = 0.040 #Espaçamento entre parede e a porta
vertices=[(3,0,0), (3,3,0), (3,3,3), (3,0,3), (4+na,0,0), (4+na,0,2.11), (5-na,0,2.11), (5-na,0,0), (6,0,0), (6,0,3), (6,3,3), (6,3,0)]
edges=[]
faces=[(0, 3, 2, 1)]
imgMat = materialsFolder + "ecobricks.jpg"
build_custom(vertices,edges, faces, imgMat)

faces=[(0, 4, 5, 6, 7, 8, 9, 3)]
build_custom(vertices,edges, faces, imgMat)

faces=[(11, 8, 9, 10)]
build_custom(vertices,edges, faces, imgMat)



#Poligono - parte de tras da casa

vertices=[(6, 3, 0), (6, 6, 0), (6, 6, 3), (6, 3, 3)]
edges=[]
imgMat = materialsFolder + "ecobricks.jpg"

build_plane(vertices, edges, imgMat)

vertices=[(6, 6, 0), (6, 6, 3), (3, 6, 3), (3, 6, 0)]
edges=[]
build_plane(vertices, edges, imgMat)

vertices=[(3, 6, 0), (0, 6, 0), (0, 6, 3), (3, 6, 3)]
edges=[]

build_plane(vertices, edges, imgMat)


#Paredes com os espaços de janelas
vertices=[(1, 3, 1), (1, 3, 2), (2, 3, 2), (2, 3, 1), (0, 3, 0), (0, 3, 3), (3, 3, 3), (3, 3, 0)]
edges=[]
faces=[(4, 0, 3, 7), (7, 3, 2, 6), (6, 2, 1, 5), (5, 1, 0, 4)]
imgMat = materialsFolder + "ecobricks.jpg"

build_custom(vertices, edges, faces, imgMat)


vertices=[(0, 5, 2), (0, 5, 2.5), (0, 4, 2.5), (0, 4, 2), (0, 6, 0), (0, 6, 3), (0, 3, 3), (0, 3, 0)]
edges=[]
imgMat = materialsFolder + "ecobricksII.jpg"

build_custom(vertices, edges, faces, imgMat)


#Janelas

#Janela principal
#Dimensões da janela (1 x 1 x 0.05m)
vertices=[(1, 3, 1), (2, 3, 1), (2, 3, 2), (1, 3, 2) ]
edges=[]
faces=[(0, 1, 2, 3)]
imgMat = materialsFolder + "ecowood.jpg"
build_frame(vertices, edges, faces, imgMat)

#Janela banheiro
#Dimensões da janela (1 x 0.5 x 0.05m)
vertices=[(0, 5, 2), (0, 5, 2.5), (0, 4, 2.5), (0, 4, 2) ]
edges=[]
faces=[(0, 1, 2, 3)]
build_frame(vertices, edges, faces, imgMat)



#Telhado
#Faces com tijolos

vertices=[(3, 0, 3), (4.5, 0, 4), (6, 0, 3) ]
edges=[]
faces=[(1, 2, 0)]
imgMat = materialsFolder + "ecobricksII.jpg"
build_custom(vertices, edges, faces, imgMat)

vertices=[(3, 6, 3), (4.5, 6, 4), (6, 6, 3) ]
edges=[]
faces=[(1, 2, 0)]
build_custom(vertices, edges, faces, imgMat)

vertices=[(0, 3, 3), (0, 4.5, 4), (0, 6, 3) ]
edges=[]
faces=[(1, 2, 0)]
build_custom(vertices, edges, faces, imgMat)



#Telhas
vertices=[(3, 0, 3), (4.5, 0, 4), (4.5, 6, 4), (3, 6, 3)]
edges=[]
faces=[(0, 1, 2, 3)]
imgMat = materialsFolder + "roofII.jpg"
build_custom(vertices, edges, faces, imgMat)


vertices=[(6, 0, 3), (4.5, 0, 4), (4.5, 6, 4), (6, 6, 3)]
edges=[]
faces=[(0, 1, 2, 3)]
build_custom(vertices, edges, faces, imgMat)

vertices=[(0, 3, 3), (0, 4.5, 4), (4.5, 4.5, 4), (4.5, 3, 3)]
edges=[]
faces=[(0, 1, 2, 3)]
imgMat = materialsFolder + "roof.jpg"
build_custom(vertices, edges, faces, imgMat)

vertices=[(0, 6, 3), (0, 4.5, 4), (4.5, 4.5, 4), (4.5, 6, 3)]
edges=[]
faces=[(0, 1, 2, 3)]
build_custom(vertices, edges, faces, imgMat)




#Piso e demais espaços

vertices=[(3, 0, 0), (3, 3, 0), (6, 3, 0), (6, 0, 0)]
imgMat = materialsFolder + "ecowood.jpg"
build_plane(vertices, edges, imgMat)

vertices=[(3, 0, 3), (3, 3, 3), (6, 3, 3), (6, 0, 3)]
build_plane(vertices, edges, imgMat)

vertices=[(6, 3, 0), (6, 6, 0), (3, 6, 0), (3, 3, 0)]
build_plane(vertices, edges, imgMat)

vertices=[(6, 3, 3), (6, 6, 3), (3, 6, 3), (3, 3, 3)]
build_plane(vertices, edges, imgMat)

vertices=[(0, 3, 0), (3, 3, 0), (3, 6, 0), (0, 6, 0)]
build_plane(vertices, edges, imgMat)

vertices=[(0, 3, 3), (3, 3, 3), (3, 6, 3), (0, 6, 3)]
build_plane(vertices, edges, imgMat)

#https://blender.stackexchange.com/questions/120517/rendering-a-cube-as-png-file-using-blenders-python-api