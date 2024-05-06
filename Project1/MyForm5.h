#pragma once
#include "sqlite3.h"
#include <msclr/marshal.h>
#include <string>
#include <msclr/marshal_cppstd.h>
namespace Project1 {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:






	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ complect;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address_id;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->complect = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id, this->name,
					this->surname, this->complect, this->fio, this->sum, this->address_id
			});
			this->dataGridView1->Location = System::Drawing::Point(-41, -3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(744, 427);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm5::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(0, 469);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(703, 33);
			this->button2->TabIndex = 18;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(0, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(703, 33);
			this->button1->TabIndex = 19;
			this->button1->Text = L"�������� ���� ������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// surname
			// 
			this->surname->HeaderText = L"surname";
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			// 
			// complect
			// 
			this->complect->HeaderText = L"complect";
			this->complect->Name = L"complect";
			this->complect->ReadOnly = true;
			// 
			// fio
			// 
			this->fio->HeaderText = L"fio";
			this->fio->Name = L"fio";
			this->fio->ReadOnly = true;
			this->fio->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// sum
			// 
			this->sum->HeaderText = L"sum";
			this->sum->Name = L"sum";
			this->sum->ReadOnly = true;
			// 
			// address_id
			// 
			this->address_id->HeaderText = L"addres_id";
			this->address_id->Name = L"address_id";
			this->address_id->ReadOnly = true;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(704, 504);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ query = "SELECT * FROM Person;";
	std::string queryStr = msclr::interop::marshal_as<std::string>(query);

	sqlite3* db;
	char* errorMessage = nullptr;
	int rc = sqlite3_open("C:\\Users\\Ivan\\source\\repos\\bd-vxod\\guiSQLiteStudio1", &db);

	// ��������� SQL-������
	sqlite3_stmt* stmt;
	rc = sqlite3_prepare_v2(db, queryStr.c_str(), -1, &stmt, NULL);

	// ������������ ��������� ���������� �������
	if (rc != SQLITE_OK) {
		MessageBox::Show("������ ��� ���������� SQL-�������!");
		sqlite3_close(db);
		return;
	}

	// ������� DataGridView
	dataGridView1->Rows->Clear();

	// ����������� �� ����������� ������� � ������� ������ � DataGridView
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		// �������� �������� �� ������� ������
		String^ id = gcnew String((char*)sqlite3_column_text(stmt, 0));
		String^ name = gcnew String((char*)sqlite3_column_text(stmt, 1));
		String^ surname = gcnew String((char*)sqlite3_column_text(stmt, 2));
		String^ complect = gcnew String((char*)sqlite3_column_text(stmt, 3));
		String^ fio = gcnew String((char*)sqlite3_column_text(stmt, 4));
		String^ sum = gcnew String((char*)sqlite3_column_text(stmt, 5));
		String^ address_id = gcnew String((char*)sqlite3_column_text(stmt, 6));

		// ��������� ����� ������ � DataGridView
		dataGridView1->Rows->Add(id, name, surname, complect, fio, sum, address_id);
	}

	// ������� �������������� ������
	sqlite3_finalize(stmt);

	// ��������� ���� ������
	sqlite3_close(db);
}
private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
