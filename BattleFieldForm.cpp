#include "BattleFieldForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CreateBattleShip(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SeaFightt::BattleFieldForm form;

	Application::Run(%form);
}



void SeaFightt::BattleFieldForm::InitializeGrid()
{
	this->battleFieldGridView->ReadOnly = true;

	this->battleFieldGridView->Columns->Add(gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->battleFieldGridView->Columns[0]->Width = 21;
	this->battleFieldGridView->Columns[0]->Selected = false;


	for (int i = 1; i <= GetBattleFieldSize(); i++) {
		this->battleFieldGridView->Columns->Add(gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->battleFieldGridView->Columns[i]->HeaderText = "";
		this->battleFieldGridView->Columns[i]->Width = 21;
		this->battleFieldGridView->Columns[i]->Name = L"Column" + i;
	}

	for (int i = 0; i < GetBattleFieldSize(); i++) {
		this->battleFieldGridView->Rows->Add();
	}

	for (int i = 1; i <= GetBattleFieldSize(); i++) {
		this->battleFieldGridView->Rows[i]->Cells[0]->Value = i;

		this->battleFieldGridView->Rows[0]->Cells[i]->Value = i;

		this->battleFieldGridView->Rows[i]->Cells[0]->Style->BackColor = DefaultBackColor;
		this->battleFieldGridView->Rows[i]->Cells[0]->Style->SelectionBackColor = DefaultBackColor;
		this->battleFieldGridView->Rows[i]->Cells[0]->Style->SelectionForeColor = DefaultForeColor;

		this->battleFieldGridView->Rows[0]->Cells[i]->Style->BackColor = DefaultBackColor;
		this->battleFieldGridView->Rows[0]->Cells[i]->Style->SelectionBackColor = DefaultBackColor;
		this->battleFieldGridView->Rows[0]->Cells[i]->Style->SelectionForeColor = DefaultForeColor;
	}

	this->battleFieldGridView->Rows[0]->Cells[0]->Style->BackColor = DefaultBackColor;
	this->battleFieldGridView->Rows[0]->Cells[0]->Style->SelectionBackColor = DefaultBackColor;
	this->battleFieldGridView->Rows[0]->Cells[0]->Style->SelectionForeColor = DefaultForeColor;

}
void SeaFightt::BattleFieldForm::InitializeEnemyGrid() 
{

	this->enemyBattleFieldGridView->ReadOnly = true;
	this->enemyBattleFieldGridView->Enabled = false;

	this->enemyBattleFieldGridView->Columns->Add(gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->enemyBattleFieldGridView->Columns[0]->Width = 21;
	this->enemyBattleFieldGridView->Columns[0]->Selected = false;


	for (int i = 1; i <= GetBattleFieldSize(); i++) {
		this->enemyBattleFieldGridView->Columns->Add(gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->enemyBattleFieldGridView->Columns[i]->HeaderText = "";
		this->enemyBattleFieldGridView->Columns[i]->Width = 21;
		this->enemyBattleFieldGridView->Columns[i]->Name = L"Column" + i;
	}

	for (int i = 0; i < GetBattleFieldSize(); i++) {
		this->enemyBattleFieldGridView->Rows->Add();
	}

	for (int i = 1; i <= GetBattleFieldSize(); i++) {
		this->enemyBattleFieldGridView->Rows[i]->Cells[0]->Value = i;

		this->enemyBattleFieldGridView->Rows[0]->Cells[i]->Value = i;

		this->enemyBattleFieldGridView->Rows[i]->Cells[0]->Style->BackColor = DefaultBackColor;
		this->enemyBattleFieldGridView->Rows[i]->Cells[0]->Style->SelectionBackColor = DefaultBackColor;
		this->enemyBattleFieldGridView->Rows[i]->Cells[0]->Style->SelectionForeColor = DefaultForeColor;

		this->enemyBattleFieldGridView->Rows[0]->Cells[i]->Style->BackColor = DefaultBackColor;
		this->enemyBattleFieldGridView->Rows[0]->Cells[i]->Style->SelectionBackColor = DefaultBackColor;
		this->enemyBattleFieldGridView->Rows[0]->Cells[i]->Style->SelectionForeColor = DefaultForeColor;
	}

	this->enemyBattleFieldGridView->Rows[0]->Cells[0]->Style->BackColor = DefaultBackColor;
	this->enemyBattleFieldGridView->Rows[0]->Cells[0]->Style->SelectionBackColor = DefaultBackColor;
	this->enemyBattleFieldGridView->Rows[0]->Cells[0]->Style->SelectionForeColor = DefaultForeColor;
}
