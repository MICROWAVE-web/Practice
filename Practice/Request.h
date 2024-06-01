#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 259);
			this->Controls->Add(this->back_btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Request";
			this->Text = L"Биржа труда";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->Show();
		this->Hide();
	}
	};
}
