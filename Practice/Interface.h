#include "AddAndEdit.h"
#include "Request.h"
#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_edit_btn;

	private: System::Windows::Forms::Button^ request_btn;

	protected:




	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->add_edit_btn = (gcnew System::Windows::Forms::Button());
			this->request_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// add_edit_btn
			// 
			this->add_edit_btn->Location = System::Drawing::Point(36, 72);
			this->add_edit_btn->Name = L"add_edit_btn";
			this->add_edit_btn->Size = System::Drawing::Size(209, 46);
			this->add_edit_btn->TabIndex = 0;
			this->add_edit_btn->Text = L"Ввод и корректировка данных";
			this->add_edit_btn->UseVisualStyleBackColor = true;
			this->add_edit_btn->Click += gcnew System::EventHandler(this, &Interface::add_edit_btn_Click);
			// 
			// request_btn
			// 
			this->request_btn->Location = System::Drawing::Point(36, 148);
			this->request_btn->Name = L"request_btn";
			this->request_btn->Size = System::Drawing::Size(209, 46);
			this->request_btn->TabIndex = 2;
			this->request_btn->Text = L"Запрос/фильтрация данных";
			this->request_btn->UseVisualStyleBackColor = true;
			this->request_btn->Click += gcnew System::EventHandler(this, &Interface::request_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Добро пожаловать в программу \"Биржа труда\"";
			this->label1->Click += gcnew System::EventHandler(this, &Interface::label1_Click);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 246);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->request_btn);
			this->Controls->Add(this->add_edit_btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Interface";
			this->Text = L"Биржа труда";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_edit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddAndEdit^ show_form = gcnew AddAndEdit(this);
	show_form->Show();
	this->Hide();
}


private: System::Void request_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Request^ show_form = gcnew Request(this);
	show_form->Show();
	this->Hide();
}
};
}
