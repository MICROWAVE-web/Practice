
#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->dataGridView1->Location = System::Drawing::Point(12, 132);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 45;
			this->dataGridView1->Size = System::Drawing::Size(858, 150);
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
			// AddAndEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 548);
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
};
}
