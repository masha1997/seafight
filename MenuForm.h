#pragma once
#include "BattleFieldForm.h"


namespace SeaFightt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  randFieldButton;
	protected:

	private: System::Windows::Forms::Button^  customFieldButton;
	protected:

	private: System::Windows::Forms::Label^  greetLabel;




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
			this->randFieldButton = (gcnew System::Windows::Forms::Button());
			this->customFieldButton = (gcnew System::Windows::Forms::Button());
			this->greetLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// randFieldButton
			// 
			this->randFieldButton->Location = System::Drawing::Point(427, 105);
			this->randFieldButton->Name = L"randFieldButton";
			this->randFieldButton->Size = System::Drawing::Size(113, 23);
			this->randFieldButton->TabIndex = 0;
			this->randFieldButton->Text = L"Автоматический";
			this->randFieldButton->UseVisualStyleBackColor = true;
			// 
			// customFieldButton
			// 
			this->customFieldButton->Location = System::Drawing::Point(173, 105);
			this->customFieldButton->Name = L"customFieldButton";
			this->customFieldButton->Size = System::Drawing::Size(113, 23);
			this->customFieldButton->TabIndex = 1;
			this->customFieldButton->Text = L"Ручной";
			this->customFieldButton->UseVisualStyleBackColor = true;
			this->customFieldButton->Click += gcnew System::EventHandler(this, &MenuForm::customFieldButton_Click);
			// 
			// greetLabel
			// 
			this->greetLabel->AutoSize = true;
			this->greetLabel->Location = System::Drawing::Point(248, 30);
			this->greetLabel->Name = L"greetLabel";
			this->greetLabel->Size = System::Drawing::Size(225, 39);
			this->greetLabel->TabIndex = 2;
			this->greetLabel->Text = L"Добрый день!\r\n\r\nВыберете режим расположения кораблей:";
			this->greetLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 280);
			this->Controls->Add(this->greetLabel);
			this->Controls->Add(this->customFieldButton);
			this->Controls->Add(this->randFieldButton);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void customFieldButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		BattleFieldForm^ battleFieldForm = gcnew BattleFieldForm();
		battleFieldForm->ShowDialog();
	}
	};
}
