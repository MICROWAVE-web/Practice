#include <string.h>
#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Request(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ parentForm;
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ fio_box;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ sex_box;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ confirm_btn;
	private: System::Windows::Forms::TextBox^ dismiss_box;


	private: System::Windows::Forms::TextBox^ edu_box;

	private: System::Windows::Forms::TextBox^ prof_box;

	private: System::Windows::Forms::TextBox^ adress_box;

	private: System::Windows::Forms::TextBox^ max_age_box;

	private: System::Windows::Forms::TextBox^ min_age_box;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Profession;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ education;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dismissal_reason;
	private: System::Windows::Forms::Button^ open_btn;

	private: bool fileUploaded = false;
	private: System::String^ filename = "db.csv";
	private: List<DataGridViewRow^>^ fileRows = gcnew List<DataGridViewRow^>();
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Request::typeid));
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fio_box = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->confirm_btn = (gcnew System::Windows::Forms::Button());
			this->dismiss_box = (gcnew System::Windows::Forms::TextBox());
			this->edu_box = (gcnew System::Windows::Forms::TextBox());
			this->prof_box = (gcnew System::Windows::Forms::TextBox());
			this->adress_box = (gcnew System::Windows::Forms::TextBox());
			this->max_age_box = (gcnew System::Windows::Forms::TextBox());
			this->min_age_box = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sex_box = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Profession = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->education = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dismissal_reason = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->open_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// back_btn
			// 
			this->back_btn->Location = System::Drawing::Point(28, 28);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(75, 23);
			this->back_btn->TabIndex = 0;
			this->back_btn->Text = L"Назад";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &Request::back_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(352, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Запрос/фильтрация";
			// 
			// fio_box
			// 
			this->fio_box->Location = System::Drawing::Point(431, 29);
			this->fio_box->Name = L"fio_box";
			this->fio_box->Size = System::Drawing::Size(100, 20);
			this->fio_box->TabIndex = 2;
			this->fio_box->Text = L"-";
			this->fio_box->TextChanged += gcnew System::EventHandler(this, &Request::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите Ф.И.О. для поиска (\'-\' если неважно, или \'!\' для исключения):";
			this->label2->Click += gcnew System::EventHandler(this, &Request::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->confirm_btn);
			this->groupBox1->Controls->Add(this->dismiss_box);
			this->groupBox1->Controls->Add(this->edu_box);
			this->groupBox1->Controls->Add(this->prof_box);
			this->groupBox1->Controls->Add(this->adress_box);
			this->groupBox1->Controls->Add(this->max_age_box);
			this->groupBox1->Controls->Add(this->min_age_box);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->sex_box);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->fio_box);
			this->groupBox1->Location = System::Drawing::Point(28, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(655, 255);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Условия";
			// 
			// confirm_btn
			// 
			this->confirm_btn->Enabled = false;
			this->confirm_btn->Location = System::Drawing::Point(563, 213);
			this->confirm_btn->Name = L"confirm_btn";
			this->confirm_btn->Size = System::Drawing::Size(75, 23);
			this->confirm_btn->TabIndex = 5;
			this->confirm_btn->Text = L"Применить";
			this->confirm_btn->UseVisualStyleBackColor = true;
			this->confirm_btn->Click += gcnew System::EventHandler(this, &Request::confirm_btn_Click);
			// 
			// dismiss_box
			// 
			this->dismiss_box->Location = System::Drawing::Point(431, 213);
			this->dismiss_box->Name = L"dismiss_box";
			this->dismiss_box->Size = System::Drawing::Size(100, 20);
			this->dismiss_box->TabIndex = 17;
			this->dismiss_box->Text = L"-1";
			this->dismiss_box->TextChanged += gcnew System::EventHandler(this, &Request::textBox8_TextChanged);
			// 
			// edu_box
			// 
			this->edu_box->Location = System::Drawing::Point(431, 186);
			this->edu_box->Name = L"edu_box";
			this->edu_box->Size = System::Drawing::Size(100, 20);
			this->edu_box->TabIndex = 16;
			this->edu_box->Text = L"-1";
			// 
			// prof_box
			// 
			this->prof_box->Location = System::Drawing::Point(431, 161);
			this->prof_box->Name = L"prof_box";
			this->prof_box->Size = System::Drawing::Size(100, 20);
			this->prof_box->TabIndex = 15;
			this->prof_box->Text = L"-";
			// 
			// adress_box
			// 
			this->adress_box->Location = System::Drawing::Point(431, 135);
			this->adress_box->Name = L"adress_box";
			this->adress_box->Size = System::Drawing::Size(100, 20);
			this->adress_box->TabIndex = 14;
			this->adress_box->Text = L"-";
			// 
			// max_age_box
			// 
			this->max_age_box->Location = System::Drawing::Point(431, 107);
			this->max_age_box->Name = L"max_age_box";
			this->max_age_box->Size = System::Drawing::Size(100, 20);
			this->max_age_box->TabIndex = 13;
			this->max_age_box->Text = L"100";
			// 
			// min_age_box
			// 
			this->min_age_box->Location = System::Drawing::Point(431, 83);
			this->min_age_box->Name = L"min_age_box";
			this->min_age_box->Size = System::Drawing::Size(100, 20);
			this->min_age_box->TabIndex = 12;
			this->min_age_box->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(337, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Введите код причины увольнения для поиска (\'-1\' если неважно):";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(298, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Введите код образования для поиска (\'-1\' если неважно):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 161);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(382, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Введите профессию для поиска (\'-\' если неважно, или \'!\' для исключения):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(235, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Введите адрес для поиска (\'-\' если неважно):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Введите максимальный возраст: ";
			this->label5->Click += gcnew System::EventHandler(this, &Request::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Введите минимальный возраст:";
			// 
			// sex_box
			// 
			this->sex_box->Location = System::Drawing::Point(431, 55);
			this->sex_box->Name = L"sex_box";
			this->sex_box->Size = System::Drawing::Size(100, 20);
			this->sex_box->TabIndex = 5;
			this->sex_box->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите пол для поиска (М/Ж) (\'-\' если неважно):";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->FIO, this->Sex,
					this->Age, this->adress, this->Profession, this->education, this->dismissal_reason
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(28, 353);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 45;
			this->dataGridView1->Size = System::Drawing::Size(817, 254);
			this->dataGridView1->TabIndex = 18;
			// 
			// FIO
			// 
			this->FIO->HeaderText = L"ФИО";
			this->FIO->MinimumWidth = 6;
			this->FIO->Name = L"FIO";
			this->FIO->ReadOnly = true;
			this->FIO->Width = 110;
			// 
			// Sex
			// 
			this->Sex->HeaderText = L"Пол";
			this->Sex->MinimumWidth = 6;
			this->Sex->Name = L"Sex";
			this->Sex->ReadOnly = true;
			this->Sex->Width = 110;
			// 
			// Age
			// 
			this->Age->HeaderText = L"Возраст";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			this->Age->ReadOnly = true;
			this->Age->Width = 110;
			// 
			// adress
			// 
			this->adress->HeaderText = L"Адрес";
			this->adress->MinimumWidth = 6;
			this->adress->Name = L"adress";
			this->adress->ReadOnly = true;
			this->adress->Width = 110;
			// 
			// Profession
			// 
			this->Profession->HeaderText = L"Профессия";
			this->Profession->MinimumWidth = 6;
			this->Profession->Name = L"Profession";
			this->Profession->ReadOnly = true;
			this->Profession->Width = 110;
			// 
			// education
			// 
			this->education->HeaderText = L"Образование";
			this->education->MinimumWidth = 6;
			this->education->Name = L"education";
			this->education->ReadOnly = true;
			this->education->Width = 110;
			// 
			// dismissal_reason
			// 
			this->dismissal_reason->HeaderText = L"Причина увольнения";
			this->dismissal_reason->MinimumWidth = 6;
			this->dismissal_reason->Name = L"dismissal_reason";
			this->dismissal_reason->ReadOnly = true;
			this->dismissal_reason->Width = 110;
			// 
			// open_btn
			// 
			this->open_btn->Location = System::Drawing::Point(746, 28);
			this->open_btn->Name = L"open_btn";
			this->open_btn->Size = System::Drawing::Size(99, 23);
			this->open_btn->TabIndex = 18;
			this->open_btn->Text = L"Открыть БД";
			this->open_btn->UseVisualStyleBackColor = true;
			this->open_btn->Click += gcnew System::EventHandler(this, &Request::open_btn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(28, 624);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(436, 114);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Примечание";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(384, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Причина увольнения (0 - сокращение, 1 - семейное положение, 2 - другое)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(289, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Образование (0 - высшее, 1 - среднее, 2 - специальное)";
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 768);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->open_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->back_btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Request";
			this->Text = L"Биржа труда";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Request::Request_FormClosed);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->Show();
		this->Hide();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void open_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->FileName = filename;
	openFileDialog1->Filter = "CSV files (*.csv)|*.csv";


	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			StreamReader^ file = gcnew StreamReader(openFileDialog1->FileName);
			String^ line;

			line = file->ReadLine();
			if (line != nullptr) {
				dataGridView1->Rows->Clear();
				dataGridView1->Refresh();
				while ((line = file->ReadLine()) != nullptr)
				{
					array<String^>^ cells = line->Split(';');
					dataGridView1->Rows->Add(cells);
				}
			}
			fileUploaded = true;
			MessageBox::Show("Данные загружены", "Данные");
			filename = openFileDialog1->FileName;
			confirm_btn->Enabled = true;
			file->Close();
			for each (DataGridViewRow ^ row in dataGridView1->Rows) {
				fileRows->Add(row);
			}
			fileRows->RemoveAt(fileRows->Count - 1);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Непредвиденная ошибка: " + ex->Message, "Данные");
		}
	}
}
	private: System::Void confirm_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		for each (DataGridViewRow ^ row in fileRows)
		{
			dataGridView1->Rows->Add(row);
		}
		List<DataGridViewRow^>^ newRows = gcnew List<DataGridViewRow^>();
		for each (DataGridViewRow ^ row in dataGridView1->Rows) {
			if (row->IsNewRow)
			{
				continue;
			}
			// Фио
			System::String^ name_query = fio_box->Text;

			// Пол
			System::String^ gender_query = sex_box->Text;

			// Мин. возраст
			Int64 min_age;
			try {
				min_age = System::Convert::ToInt64(min_age_box->Text);
			}
			catch (Exception^ ex) {
				min_age = -1;
			}

			// Макс. возраст
			Int64 max_age;
			try {
				max_age = System::Convert::ToInt64(max_age_box->Text);
			}
			catch (Exception^ ex) {
				max_age = 100;
			} 

			// Адрес
			System::String^ address_query = adress_box->Text;
			
			// Профессия
			System::String^ profession_query = prof_box->Text;

			// Образование
			Int64 education_query;
			try {
				education_query = System::Convert::ToInt64(edu_box->Text);
			}
			catch (Exception^ ex) {
				education_query = -1;
			}

			// Причина увольнения
			Int64 dismissal_reason_query;
			try {
				dismissal_reason_query = System::Convert::ToInt64(dismiss_box->Text);
			}
			catch (Exception^ ex) {
				dismissal_reason_query = -1;
			}

			if ((name_query[0] != '-' && !row->Cells[0]->Value->ToString()->Contains(name_query)) ||
				(gender_query[0] != '-' && row->Cells[1]->Value->ToString() != gender_query) ||
				(System::Convert::ToInt64(row->Cells[2]->Value->ToString()) < min_age || System::Convert::ToInt64(row->Cells[2]->Value->ToString()) > max_age) ||
				(address_query[0] != '-' && !row->Cells[3]->Value->ToString()->Contains(address_query)) ||
				(profession_query[0] != '-' && !row->Cells[4]->Value->ToString()->Contains(profession_query)) ||
				(education_query != -1 && System::Convert::ToInt64(row->Cells[5]->Value->ToString()) != education_query) ||
				(dismissal_reason_query != -1 && System::Convert::ToInt64(row->Cells[6]->Value->ToString()) != dismissal_reason_query)) {
				continue;
			}
			newRows->Add(row);

		}

		dataGridView1->Rows->Clear();
		for each (DataGridViewRow ^ row in newRows)
		{
			dataGridView1->Rows->Add(row);
		}
		MessageBox::Show("Данные успешно отфильтрованны", "Данные");
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Request_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
