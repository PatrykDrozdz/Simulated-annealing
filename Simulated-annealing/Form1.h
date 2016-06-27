#pragma once

#include<math.h>
#include<stdlib.h>
#include<time.h>

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  T;
	private: System::Windows::Forms::TextBox^  alf;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  genCon;
	private: System::Windows::Forms::Label^  lambda;
	private: System::Windows::Forms::TextBox^  lambd;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  genPoints;
	private: System::Windows::Forms::TextBox^  R;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  N;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  s0;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		///potrzebne dane
		////////////////////////


	private: Double fun = 0;
	private: Double pi = 3.14;
	private: Double lam = 0;
	private: Double alfa = 0;
	private: Double RandomPointX = 0;
	private: Double RandomPointY = 0;
	private: Random^ rand = gcnew Random(); ///liczby pseudolosowe
	private: Int16* tabXRec;
	private: Int16* tabYRec;
	private: Int16* tabLineX;
	private: Int16* tabLineY;
	private: Int16* tabRo;

	private: Int16 n = 0; //liczba elementów losowych
	private: Int16 r = 0;//s¹siedztwo
	//private: System::Windows::Forms::Timer^  timer2;
	private: Int16 s0Num = 0;//punkt bazowy
	private: Int16 t = 0;
	private: Int16 x = 0;
	private: Int16 rX = 20;
	private: Int16 rY = 30;
			 //zmienne pomocnicze - sprawdzaj¹ce
	private: int checkRec = 0;
	private: int checkLine = 0;
	private: int borderWidth = 540;
	private: int borderHeight = 540;

	private: Int16 tick = 0;
			 ///////////////////////

			 //funkcje
			 //////////////////////////////////////////////////

			 //cauchy

	public: Double cauchy(Int16 i) {
		fun = ((1 / this->pi) * lam / (pow(lam, 2) + pow(((Double)i - alfa), 2)));

		return fun;
	}

			//////////////////////





#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->T = (gcnew System::Windows::Forms::TextBox());
			this->alf = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->genCon = (gcnew System::Windows::Forms::Button());
			this->lambda = (gcnew System::Windows::Forms::Label());
			this->lambd = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->genPoints = (gcnew System::Windows::Forms::Button());
			this->R = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->N = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->s0 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->T);
			this->groupBox3->Controls->Add(this->alf);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->genCon);
			this->groupBox3->Controls->Add(this->lambda);
			this->groupBox3->Controls->Add(this->lambd);
			this->groupBox3->Location = System::Drawing::Point(608, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(244, 283);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Connections";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"temperature";
			// 
			// T
			// 
			this->T->Location = System::Drawing::Point(77, 132);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(88, 20);
			this->T->TabIndex = 14;
			// 
			// alf
			// 
			this->alf->Location = System::Drawing::Point(77, 35);
			this->alf->Name = L"alf";
			this->alf->Size = System::Drawing::Size(88, 20);
			this->alf->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Alfa";
			// 
			// genCon
			// 
			this->genCon->Location = System::Drawing::Point(20, 193);
			this->genCon->Name = L"genCon";
			this->genCon->Size = System::Drawing::Size(207, 84);
			this->genCon->TabIndex = 9;
			this->genCon->Text = L"make connections";
			this->genCon->UseVisualStyleBackColor = true;
			this->genCon->Click += gcnew System::EventHandler(this, &Form1::genCon_Click);
			// 
			// lambda
			// 
			this->lambda->AutoSize = true;
			this->lambda->Location = System::Drawing::Point(6, 91);
			this->lambda->Name = L"lambda";
			this->lambda->Size = System::Drawing::Size(45, 13);
			this->lambda->TabIndex = 13;
			this->lambda->Text = L"Lambda";
			// 
			// lambd
			// 
			this->lambd->Location = System::Drawing::Point(77, 84);
			this->lambd->Name = L"lambd";
			this->lambd->Size = System::Drawing::Size(88, 20);
			this->lambd->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->genPoints);
			this->groupBox2->Controls->Add(this->R);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->N);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->s0);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(608, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(244, 171);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Points";
			// 
			// genPoints
			// 
			this->genPoints->Location = System::Drawing::Point(124, 39);
			this->genPoints->Name = L"genPoints";
			this->genPoints->Size = System::Drawing::Size(103, 110);
			this->genPoints->TabIndex = 6;
			this->genPoints->Text = L"Make points";
			this->genPoints->UseVisualStyleBackColor = true;
			this->genPoints->Click += gcnew System::EventHandler(this, &Form1::genPoints_Click);
			// 
			// R
			// 
			this->R->Location = System::Drawing::Point(20, 81);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(88, 20);
			this->R->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"N";
			// 
			// N
			// 
			this->N->Location = System::Drawing::Point(20, 39);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(88, 20);
			this->N->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"r";
			// 
			// s0
			// 
			this->s0->Location = System::Drawing::Point(20, 129);
			this->s0->Name = L"s0";
			this->s0->Size = System::Drawing::Size(88, 20);
			this->s0->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"s0";
			// 
			// timer
			// 
			this->timer->Interval = 500;
			this->timer->Tick += gcnew System::EventHandler(this, &Form1::timer_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 518);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(880, 556);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(880, 556);
			this->Name = L"Form1";
			this->Text = L"Annealing";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void genPoints_Click(System::Object^  sender, System::EventArgs^  e) {


	if (this->checkRec == 0) {

		this->n = Int16::Parse(this->N->Text);
		this->r = Int16::Parse(this->R->Text);
		this->s0Num = Int16::Parse(this->s0->Text);

		tabXRec = new Int16[this->n];
		tabYRec = new Int16[this->n];

		tabLineX = new Int16[this->n - 1];
		tabLineY = new Int16[this->n - 1];

		tabRo = new Int16[this->n - 1];

		for (Int16 i = 0; i < n; i++) {

			if (s0Num > r) {
				Int16 add = s0Num;

				s0Num = r;
				r = add;
			}

			this->RandomPointX = rand->Next(s0Num, this->r);
			this->RandomPointY = rand->Next(s0Num, this->r);



			tabXRec[i] = ((Int16)this->RandomPointX) % this->borderWidth;
			tabYRec[i] = ((Int16)this->RandomPointY) % this->borderWidth;


		}

		checkRec++;

		timer->Enabled = true;
		timer->Start();
	}


}
private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {

	Pen^ blackPen = gcnew Pen(Color::Black, 2.0f);

	System::Drawing::SolidBrush^ myBrush =
		gcnew System::Drawing::SolidBrush(System::Drawing::Color::Red);
	System::Drawing::Graphics^ formGraphics;
	formGraphics = this->CreateGraphics();

	formGraphics->FillEllipse(myBrush, Rectangle(tabXRec[tick], tabYRec[tick], this->rX, this->rY));
	formGraphics->DrawEllipse(blackPen, tabXRec[tick], tabYRec[tick], this->rX, this->rY);


	tick++;

	if (this->tick == this->n) {
		timer->Enabled = false;
		timer->Stop();
		tick = 0;
	}

}
private: System::Void genCon_Click(System::Object^  sender, System::EventArgs^  e) {

	this->t = Int16::Parse(this->T->Text);

	if (this->checkRec > 0) {


		this->alfa = Int16::Parse(alf->Text);

		this->lam = Int16::Parse(lambd->Text);

		for (Int16 i = 0; i < n; i++) {


			tabRo[i] = cauchy(tabXRec[i]) - cauchy(s0Num);

			if (tabRo[i] < 0) {
				tabLineX[i] = tabXRec[i] + rX / 2;
				tabLineY[i] = tabYRec[i] + rY / 2;
			}
			else {

				this->x = rand->Next(0, 1);

				if (x < exp(((-1)*tabRo[i]) / t)) {
					tabLineX[i] = tabXRec[i] + rX / 2;
					tabLineY[i] = tabYRec[i] + rY / 2;
				}

			}

			timer2->Enabled = true;
			timer2->Start();

		}



	}

	checkLine++;

}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

	//linie
	Graphics^ graph = this->CreateGraphics();
	Pen^ pen = gcnew Pen(Color::Black, 3.0f);

	graph->DrawLine(pen, tabLineX[tick], tabLineY[tick], tabLineX[tick + 1], tabLineY[tick + 1]);


	tick++;

	if (this->tick == this->n - 1) {
		timer->Enabled = false;
		timer->Stop();
		tick = 0;
	}


}
};
}

