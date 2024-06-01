

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
	/// Сводка для AddAndEdit
	/// </summary>
	public ref class AddAndEdit : public System::Windows::Forms::Form
	{
	public:
		AddAndEdit(System::Windows::Forms::Form^ parent)
		{
			parentForm = parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddAndEdit()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool fileUploaded = false;

	private: System::Windows::Forms::Form^ parentForm;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Profession;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ education;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dismissal_reason;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::Button^ open_btn;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddAndEdit::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Profession = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->education = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dismissal_reason = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->open_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(363, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод и корректировка данных";
			this->label1->Click += gcnew System::EventHandler(this, &AddAndEdit::label1_Click);
			// 
			// back_btn
			// 
			this->back_btn->Location = System::Drawing::Point(12, 24);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(80, 26);
			this->back_btn->TabIndex = 4;
			this->back_btn->Text = L"<- Назад";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &AddAndEdit::back_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->FIO, this->Sex,
					this->Age, this->adress, this->Profession, this->education, this->dismissal_reason
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 45;
			this->dataGridView1->Size = System::Drawing::Size(817, 150);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddAndEdit::dataGridView1_CellContentClick);
			// 
			// FIO
			// 
			this->FIO->HeaderText = L"ФИО";
			this->FIO->MinimumWidth = 6;
			this->FIO->Name = L"FIO";
			this->FIO->Width = 110;
			// 
			// Sex
			// 
			this->Sex->HeaderText = L"Пол";
			this->Sex->MinimumWidth = 6;
			this->Sex->Name = L"Sex";
			this->Sex->Width = 110;
			// 
			// Age
			// 
			this->Age->HeaderText = L"Возраст";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			this->Age->Width = 110;
			// 
			// adress
			// 
			this->adress->HeaderText = L"Адрес";
			this->adress->MinimumWidth = 6;
			this->adress->Name = L"adress";
			this->adress->Width = 110;
			// 
			// Profession
			// 
			this->Profession->HeaderText = L"Профессия";
			this->Profession->MinimumWidth = 6;
			this->Profession->Name = L"Profession";
			this->Profession->Width = 110;
			// 
			// education
			// 
			this->education->HeaderText = L"Образование";
			this->education->MinimumWidth = 6;
			this->education->Name = L"education";
			this->education->Width = 110;
			// 
			// dismissal_reason
			// 
			this->dismissal_reason->HeaderText = L"Причина увольнения";
			this->dismissal_reason->MinimumWidth = 6;
			this->dismissal_reason->Name = L"dismissal_reason";
			this->dismissal_reason->Width = 110;
			// 
			// save_btn
			// 
			this->save_btn->Location = System::Drawing::Point(795, 308);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(75, 23);
			this->save_btn->TabIndex = 6;
			this->save_btn->Text = L"Сохранить";
			this->save_btn->UseVisualStyleBackColor = true;
			// 
			// delete_btn
			// 
			this->delete_btn->Location = System::Drawing::Point(17, 308);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(130, 23);
			this->delete_btn->TabIndex = 7;
			this->delete_btn->Text = L"Удалить строку";
			this->delete_btn->UseVisualStyleBackColor = true;
			// 
			// open_btn
			// 
			this->open_btn->Location = System::Drawing::Point(771, 24);
			this->open_btn->Name = L"open_btn";
			this->open_btn->Size = System::Drawing::Size(99, 23);
			this->open_btn->TabIndex = 8;
			this->open_btn->Text = L"Открыть БД";
			this->open_btn->UseVisualStyleBackColor = true;
			this->open_btn->Click += gcnew System::EventHandler(this, &AddAndEdit::open_btn_Click);
			// 
			// AddAndEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 548);
			this->Controls->Add(this->open_btn);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddAndEdit";
			this->Text = L"Биржа труда";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	parentForm->Show();
	this->Hide();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void open_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->FileName = "db.csv";
	openFileDialog1->Filter = "CSV files (*.csv)|*.csv";


	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			StreamReader^ file = gcnew StreamReader(openFileDialog1->FileName);
			String^ line;

			line = file->ReadLine();
			if (line != nullptr) {
				array<String^>^ cells = line->Split(';');

				dataGridView1->Rows->Add(cells);

				while ((line = file->ReadLine()) != nullptr)
				{
					cells = line->Split(';'); 
					dataGridView1->Rows->Add(cells); 
				}
			}
			fileUploaded = true;
			MessageBox::Show("Данные загружены", "Готово");
			file->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Непредвиденная ошибка: " + ex->Message, "Ошибка");
		}
	}
}
};
}
