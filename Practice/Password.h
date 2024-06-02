#include "AddAndEdit.h"
#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ Password
	/// </summary>
	public ref class Password : public System::Windows::Forms::Form
	{
	public:
		Password(System::Windows::Forms::Form^ parent)
		{
			parentForm = parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Password()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Form^ parentForm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ pass_box;

	private: System::Windows::Forms::Button^ pass_btn;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Password::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pass_box = (gcnew System::Windows::Forms::TextBox());
			this->pass_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¬ведите пароль";
			// 
			// pass_box
			// 
			this->pass_box->Location = System::Drawing::Point(64, 75);
			this->pass_box->Name = L"pass_box";
			this->pass_box->Size = System::Drawing::Size(138, 20);
			this->pass_box->TabIndex = 1;
			this->pass_box->UseSystemPasswordChar = true;
			// 
			// pass_btn
			// 
			this->pass_btn->Location = System::Drawing::Point(83, 103);
			this->pass_btn->Name = L"pass_btn";
			this->pass_btn->Size = System::Drawing::Size(94, 23);
			this->pass_btn->TabIndex = 2;
			this->pass_btn->Text = L"¬вод";
			this->pass_btn->UseVisualStyleBackColor = true;
			this->pass_btn->Click += gcnew System::EventHandler(this, &Password::pass_btn_Click);
			// 
			// Password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(268, 138);
			this->Controls->Add(this->pass_btn);
			this->Controls->Add(this->pass_box);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Password";
			this->Text = L"Ѕиржа труда";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Password::Password_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pass_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ filePath = "password.txt";
		if (File::Exists(filePath))
		{
			System::String^ fileContent = File::ReadAllText(filePath);
			if (pass_box->Text == fileContent)
			{
				AddAndEdit^ aed_form = gcnew AddAndEdit(parentForm);
				aed_form->Show();
				this->Hide();
			}
			else
			{
				MessageBox::Show("ѕароль неправильный.", "ќшибка доступа");
			}
		}
		else
		{
			MessageBox::Show("‘айл password.txt не найден", "ќшибка чтени€ файла");
		}
	}
	private: System::Void Password_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
};
}
