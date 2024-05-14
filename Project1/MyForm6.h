#pragma once
#include "sqlite3.h"
#include <msclr/marshal.h>
#include <string>
#include <msclr/marshal_cppstd.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private:
		std::string utf8_encode(const std::wstring& wstr)
		{
			if (wstr.empty()) {
				return std::string();
			}

			int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
			std::string strTo(size_needed, 0);
			WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);

			return strTo;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlueViolet;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(-17, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(590, 121);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(564, 39);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Добавление в таблицу: Address";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm6::label2_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button5->Location = System::Drawing::Point(545, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(376, 196);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(376, 331);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 20);
			this->textBox6->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(377, 289);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 20);
			this->textBox5->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(377, 243);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 20);
			this->textBox4->TabIndex = 21;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm6::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(229, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 16);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Страна";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(224, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Город";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(229, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Улица";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(229, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Персон айди";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(285, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 31);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(441, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 31);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(575, 461);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlite3* db;
		char* errorMessage = nullptr;

		int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-vxod\\guiSQLiteStudio1", &db);


		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка при открытии базы данных!");
		}
		else {
			String^ street = textBox4->Text;
			String^ city = textBox5->Text;
			String^ country = textBox6->Text;

			std::string utf8Street = utf8_encode(msclr::interop::marshal_as<std::wstring>(street));
			std::string utf8City = utf8_encode(msclr::interop::marshal_as<std::wstring>(city));
			std::string utf8Country = utf8_encode(msclr::interop::marshal_as<std::wstring>(country));

			String^ queryAddress = "INSERT INTO Address (street, city, country) VALUES ('" + gcnew String(utf8Street.c_str()) + "', '" + gcnew String(utf8City.c_str()) + "', '" + gcnew String(utf8Country.c_str()) + "');";
			std::string queryAddressStr = msclr::interop::marshal_as<std::string>(queryAddress);

			rc = sqlite3_exec(db, queryAddressStr.c_str(), NULL, 0, &errorMessage);

			if (rc != SQLITE_OK) {
				MessageBox::Show("Ошибка при выполнении SQL-запроса: " + gcnew String(errorMessage));
			}
			else {
				MessageBox::Show("Данные успешно добавлены в базу данных!");
			}

			sqlite3_close(db);
		}
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
