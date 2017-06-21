#pragma once

namespace SeaFightt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BattleFieldForm
	/// </summary>
	public ref class BattleFieldForm : public System::Windows::Forms::Form
	{
	public:
		BattleFieldForm(void)
		{
			InitializeComponent();

			InitializeGrid();
			InitializeEnemyGrid();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BattleFieldForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  battleFieldGridView;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column2;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column4;
	private: System::Windows::Forms::DataGridView^  enemyBattleFieldGridView;
	private: System::Windows::Forms::Button^  acceptButton;
	private: System::Windows::Forms::Label^  moveInfoLabel;




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
			this->battleFieldGridView = (gcnew System::Windows::Forms::DataGridView());
			this->enemyBattleFieldGridView = (gcnew System::Windows::Forms::DataGridView());
			this->acceptButton = (gcnew System::Windows::Forms::Button());
			this->moveInfoLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleFieldGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBattleFieldGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// battleFieldGridView
			// 
			this->battleFieldGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->battleFieldGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->battleFieldGridView->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->battleFieldGridView->ColumnHeadersVisible = false;
			this->battleFieldGridView->Location = System::Drawing::Point(384, 47);
			this->battleFieldGridView->Name = L"battleFieldGridView";
			this->battleFieldGridView->RowHeadersVisible = false;
			this->battleFieldGridView->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->battleFieldGridView->Size = System::Drawing::Size(262, 250);
			this->battleFieldGridView->TabIndex = 1;
			this->battleFieldGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BattleFieldForm::battleFieldGridView_CellClick);
			// 
			// enemyBattleFieldGridView
			// 
			this->enemyBattleFieldGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->enemyBattleFieldGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->enemyBattleFieldGridView->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->enemyBattleFieldGridView->ColumnHeadersVisible = false;
			this->enemyBattleFieldGridView->Location = System::Drawing::Point(12, 47);
			this->enemyBattleFieldGridView->Name = L"enemyBattleFieldGridView";
			this->enemyBattleFieldGridView->RowHeadersVisible = false;
			this->enemyBattleFieldGridView->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->enemyBattleFieldGridView->Size = System::Drawing::Size(262, 250);
			this->enemyBattleFieldGridView->TabIndex = 3;
			this->enemyBattleFieldGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BattleFieldForm::enemyBattleFieldGridView_CellClick);
			// 
			// acceptButton
			// 
			this->acceptButton->Location = System::Drawing::Point(290, 204);
			this->acceptButton->Name = L"acceptButton";
			this->acceptButton->Size = System::Drawing::Size(81, 53);
			this->acceptButton->TabIndex = 4;
			this->acceptButton->Text = L"Продолжить";
			this->acceptButton->UseVisualStyleBackColor = true;
			this->acceptButton->Click += gcnew System::EventHandler(this, &BattleFieldForm::acceptButton_Click);
			// 
			// moveInfoLabel
			// 
			this->moveInfoLabel->AutoSize = true;
			this->moveInfoLabel->Location = System::Drawing::Point(305, 171);
			this->moveInfoLabel->Name = L"moveInfoLabel";
			this->moveInfoLabel->Size = System::Drawing::Size(35, 13);
			this->moveInfoLabel->TabIndex = 5;
			this->moveInfoLabel->Text = L"label1";
			// 
			// BattleFieldForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 332);
			this->Controls->Add(this->moveInfoLabel);
			this->Controls->Add(this->acceptButton);
			this->Controls->Add(this->enemyBattleFieldGridView);
			this->Controls->Add(this->battleFieldGridView);
			this->Name = L"BattleFieldForm";
			this->Text = L"BattleFieldForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->battleFieldGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBattleFieldGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	void InitializeGrid();
	void InitializeEnemyGrid();
#pragma endregion
	public:
		int GetBattleFieldSize() {
		return 10;
	}
	private: System::Void battleFieldGridView_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		battleFieldGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = Color::GreenYellow;	
	}

	private: System::Void acceptButton_Click(System::Object^  sender, System::EventArgs^  e) {
		battleFieldGridView->Enabled = false;
		enemyBattleFieldGridView->Enabled = true;
	}
	private: System::Void enemyBattleFieldGridView_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int battleField[10][10];
		for (int i = 1; i < (battleFieldGridView->ColumnCount); i++)
			for (int j = 1; j < (battleFieldGridView->RowCount); j++)
				battleField[i-1][j-1] = (battleFieldGridView->Rows[i]->Cells[j]->Style->BackColor == Color::GreenYellow ? 1 : 0);
				

		enemyBattleFieldGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = Color::PaleVioletRed;
	}
};
}
