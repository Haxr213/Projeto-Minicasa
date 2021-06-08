#pragma once
#include "ImagemHelper.h"
#include <iostream>
#include <fstream>
#include <string>
#include <omp.h>

namespace SweetHome {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button19;


	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(40, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aplica Escala de Cinza";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(319, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Vista A";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(533, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Vista B";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(906, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Vista C";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(426, 136);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(319, 209);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(800, 136);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(319, 209);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 56);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Aplica Contraste";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(262, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 56);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Gira Horizontalmente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button4->Location = System::Drawing::Point(648, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 56);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Gira Horizontalmente";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(539, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 56);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Aplica Contraste";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button6->Location = System::Drawing::Point(426, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 56);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Aplica Escala de Cinza na Vista A";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button7->Location = System::Drawing::Point(1022, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 56);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Gira Horizontalmente";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(912, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 56);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Aplica Contraste";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button9->Location = System::Drawing::Point(800, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 56);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Aplica Escala de Cinza na Vista A";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(515, 734);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 69);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Aplica Todos os Efeitos a Todas as Vistas";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button11->Location = System::Drawing::Point(262, 365);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 56);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Gira Horizontalmente";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(152, 365);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(94, 56);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Aplica Contraste";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(146, 446);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 31);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Vista D";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(40, 489);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(319, 209);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Location = System::Drawing::Point(40, 365);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(97, 56);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Aplica Escala de Cinza";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button14->Location = System::Drawing::Point(648, 365);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 56);
			this->button14->TabIndex = 25;
			this->button14->Text = L"Gira Horizontalmente";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(538, 365);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(94, 56);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Aplica Contraste";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(532, 446);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 31);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Vista E";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(426, 489);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(319, 209);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Location = System::Drawing::Point(426, 365);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(97, 56);
			this->button16->TabIndex = 21;
			this->button16->Text = L"Aplica Escala de Cinza";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->button17->Location = System::Drawing::Point(1022, 365);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(97, 56);
			this->button17->TabIndex = 30;
			this->button17->Text = L"Gira Horizontalmente";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(912, 365);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(94, 56);
			this->button18->TabIndex = 29;
			this->button18->Text = L"Aplica Contraste";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(906, 446);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 31);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Vista F";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(800, 489);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(319, 209);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 27;
			this->pictureBox6->TabStop = false;
			// 
			// button19
			// 
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Location = System::Drawing::Point(800, 365);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(97, 56);
			this->button19->TabIndex = 26;
			this->button19->Text = L"Aplica Escala de Cinza";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1373, 815);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "cake.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "cake.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "cake.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 3);
	};

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa2.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa2.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa2.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa3.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};
	
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa3.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa3.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 3);
	};

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa4.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa4.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa4.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 3);
	};

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa5.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa5.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa5.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 3);
	};

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa6.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
	};

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa6.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 2);
	};

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo = "casa6.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 3);
	};

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		ImagemHelper imagemHelper;
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		String^ folderName;

		if (dlg->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)

		{

			folderName = dlg->SelectedPath;
		}
		string nomeArquivo1 = "cake.ppm";
		string nomeArquivo2 = "casa2.ppm";
		string nomeArquivo3 = "casa3.ppm";
		string nomeArquivo4 = "casa4.ppm";
		string nomeArquivo5 = "casa5.ppm";
		string nomeArquivo6 = "casa6.ppm";
		string diretorio;

		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(folderName)).ToPointer();
		diretorio = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		#pragma omp parallel 
		{
			#pragma omp sections 
			{
				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivo1, diretorio, 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivo1, diretorio, 2);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivo1 diretorio, 3);

				/*#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo2, diretorio, 1);
				
				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo2, diretorio, 2);

				#pragma omp section	
				imagemHelper.aplicaEfeitos(nomeArquivo2, diretorio, 3);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo3, diretorio, 1);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo3, diretorio, 2);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo3, diretorio, 3);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo4, diretorio, 1);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo4, diretorio, 2);
				
				#pragma omp section				
				imagemHelper.aplicaEfeitos(nomeArquivo4, diretorio, 3);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo5, diretorio, 1);
				
				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo5, diretorio, 2);
				
				#pragma omp section				
				imagemHelper.aplicaEfeitos(nomeArquivo5, diretorio, 3);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo6, diretorio, 1);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo6, diretorio, 2);

				#pragma omp section
				imagemHelper.aplicaEfeitos(nomeArquivo6, diretorio, 3);*/
			}
		}
	};
};
}
