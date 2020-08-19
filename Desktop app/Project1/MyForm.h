#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Diagnostics;
	#include <math.h>

	public ref class MyForm : public System::Windows::Forms::Form{
		
	public:
		MyForm(void){
		InitializeComponent();
		}

	protected:
		~MyForm(){
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  PathsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  LoadjToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::ComponentModel::IContainer^  components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->PathsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadjToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(826, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X_coordinates";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(907, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y_coordinates";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(436, 540);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(800, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Number of moves:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(899, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0";
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(890, 9);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(74, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyForm::comboBox1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(826, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Serial Port:";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Location = System::Drawing::Point(920, 288);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 19);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Finish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(829, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(146, 225);
			this->textBox1->TabIndex = 12;
			// 
			// timer1
			// 
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->PathsToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// PathsToolStripMenuItem
			// 
			this->PathsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->SaveToolStripMenuItem,
					this->LoadjToolStripMenuItem
			});
			this->PathsToolStripMenuItem->Name = L"PathsToolStripMenuItem";
			this->PathsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->PathsToolStripMenuItem->Text = L"Paths";
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->SaveToolStripMenuItem->Text = L"Save";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// LoadjToolStripMenuItem
			// 
			this->LoadjToolStripMenuItem->Name = L"LoadjToolStripMenuItem";
			this->LoadjToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->LoadjToolStripMenuItem->Text = L"Load";
			this->LoadjToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(984, 857);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"P.D.R. II";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	array<String^>^ ports;
	int x, y;
	int numofpoints = 0;
	array<Point>^points = gcnew array<Point>(50); 
		
static double pythagorean(int arg_a, int arg_b)
		{
			if (arg_a == 0 && arg_b == 0)
			{
				return 0;
			}
			else
			{
				return sqrt(pow(arg_a, 2) + pow(arg_b, 2));
			}
		}
static double polar_angle(double arg_x, double arg_y)
		{
			if (arg_x > 0 && arg_y > 0)
			{
				return (atan(arg_y / arg_x) * 360) / 6.2831;
			}
			if (arg_x < 0 && arg_y>0)
			{
				return ((atan((-1 * arg_x) / arg_y) * 360) / 6.2831) + 90;
			}
			if (arg_x < 0 && arg_y < 0)
			{
				return ((atan((-1 * arg_y) / (-1 * arg_x)) * 360) / 6.2831) + 180;
			}
			if (arg_x > 0 && arg_y < 0)
			{
				return ((atan(arg_x / (-1 * arg_y)) * 360) / 6.2831) + 270;
			}
			if (arg_x > 0 && arg_y == 0)
			{
				return 0;
			}
			if (arg_x == 0 && arg_y > 0)
			{
				return 90;
			}
			if (arg_x < 0 && arg_y == 0)
			{
				return 180;
			}
			if (arg_x == 0 && arg_y < 0)
			{
				return 270;
			}
			else
			{
				return 0;
			}
		}
	
public: ref class Cpoint
	{
	private:
		int x, y;
	public:
		Cpoint(int arg_x, int arg_y)
		{
			x = arg_x;
			y = arg_y;
		}
		Cpoint()
		{}
		int getx(){
			return x;
		}
		void setx(int arg_x){
			x = arg_x;
		}
		int gety(){
			return y;
		}
		void sety(int arg_y){
			y = arg_y;
		}
	};
public:	ref class Cvector :public Cpoint{
	private:
		double angle;
		double length;
	public:
		Cvector(Cpoint ^arg1, Cpoint ^arg2){
		this->sety(arg2->gety() - arg1->gety());
		this->setx(arg2->getx() - arg1->getx());
		length = pythagorean(this->getx(), this->gety());
		angle = polar_angle(this->getx(), this->gety());}
	void setangle(double arg_x){
			angle = arg_x;
		}
	double get_angle(){
			return angle;
		}
	double get_length(){
			return this->length;
		}

	};
public: ref class Cinstuction{
	public:
		double length;
		double angle;
		Cinstuction(Cvector ^arg1, Cvector ^arg2)
		{
			length = arg2->get_length();
			angle = arg1->get_angle() - arg2->get_angle();
			if (this->angle>200){
				this->angle =(180-this->angle );
			}
			if (this->angle<-200){
				this->angle = (360+this->angle);
			}

		}

	};
public: System::Windows::Forms::Label^ new_label(Point arg_x, Point arg_y){
	
	System::Windows::Forms::Label^ txt_length = gcnew System::Windows::Forms::Label();
	this->Controls->Add(txt_length);
	txt_length->Size = System::Drawing::Size(1, 1);
	txt_length->AutoSize = true;
	int r_x;
	int r_y;
	
	if (arg_y.X>arg_x.X){
		 r_x = arg_x.X+(arg_y.X - arg_x.X) / 2;
	}
	else{
		 r_x = arg_y.X+(arg_x.X - arg_y.X) / 2;
	}
	if (arg_y.Y>arg_x.Y){
		 r_y = arg_x.Y+(arg_y.Y - arg_x.Y) / 2;
	}
	else{
		 r_y = arg_y.Y+(arg_x.Y - arg_y.Y) / 2;
	}
	
	
	txt_length->Text=(static_cast<int>(pythagorean((arg_x.X-arg_y.X), (arg_x.Y-arg_y.Y))/15)).ToString()+"cm";
	txt_length->Location = System::Drawing::Point(r_x+5, r_y+5);
	return txt_length;
			}
	public: void draw(int arg_x, int arg_y){
		points[0] = Point(500, 500);
		int r_x;
		int r_y;

		points[numofpoints] = Point(arg_x + 436 + 64, (arg_y*-1) + 436 + 64); //add new point to the array
		Graphics^ line = this->CreateGraphics();
		
		Pen^ myPen = gcnew Pen(System::Drawing::Color::Black);
		int i;
		for (i = 0; i < numofpoints; i++){
			new_label(points[i], points[i + 1]); //draw lenght
		}
		for (i = 0; i < numofpoints; i++){
			line->DrawLine(myPen, points[i], points[i + 1]); //draw lines
			r_x = points[i].X; 
			r_y = points[i].Y;
			line->DrawRectangle(myPen, r_x - 3, r_y - 3, 6, 6); //draw squares
		}

	}

//Declare points on pointer
array<Cpoint ^>^Po = gcnew array<Cpoint ^>(50);
//Declare vectors on pointer
array<Cvector ^>^We = gcnew array<Cvector ^>(50);
//Declare instructions on pointer
array<Cinstuction ^>^In = gcnew array<Cinstuction ^>(50);

private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
	}
			
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		ports = serialPort1->GetPortNames();//Add avaible ports
		comboBox1->Items->AddRange(ports);
		
		CreateGraphics();
		timer1->Enabled = false;
		

		// first point (0,0)
		Po[0] = gcnew Cpoint(0, 0);
		//first vector (0,0)
		We[0] = gcnew Cvector(Po[0], Po[0]);
		//first vector 90 degrees
		We[0]->setangle(90);
}
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		x = (e->X) - 500;
		y = ((e->Y) - 500)*-1;
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}

	private: System::Void MyForm_Click(System::Object^  sender, System::EventArgs^  e) {
		if (numofpoints<49){
			label1->Text = x.ToString();
			label2->Text = y.ToString();

			pictureBox1->Location = Point(x + 500 - 64, (y*-1) + 500 - 64);
			numofpoints++;
			draw(x, y);
			Po[numofpoints] = gcnew Cpoint(x, y);
			label4->Text = numofpoints.ToString();
			
		}
		else{
			MessageBox::Show("Maxium number of points have been reached!",
				"Attention", MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		serialPort1->PortName = comboBox1->Text;
		try {
			serialPort1->Open();
			}
		catch (...) {
			if (serialPort1->IsOpen == false)
			{
				MessageBox::Show("Unable to open Serial Port",
					"Attention", MessageBoxButtons::OK,
					MessageBoxIcon::Information);}
		}
}
	private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (serialPort1->IsOpen == true)
		{
			serialPort1->Close();
		}
}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (serialPort1->IsOpen == true) {
			int i = 1;
			for (i = 1; i < numofpoints + 1; i++)//Creating vectors
			{
				We[i] = gcnew Cvector(Po[i - 1], Po[i]);
			}
			int j = 0;
			int cast_length;
			int cast_angle;
			Stopwatch timer;
			timer.StartNew();
			
			for (j = 0; j < numofpoints; j++)//Creating instructions
			{
					In[j] = gcnew Cinstuction(We[j], We[j + 1]);
					cast_length = static_cast<int>(In[j]->length);
					cast_angle = static_cast<int>(In[j]->angle);
					textBox1->Text += "Length:" + cast_length + " Angle:" + cast_angle + "\r\n";
					serialPort1->WriteLine("L" + cast_length + "A" + cast_angle);
			}
			pictureBox1->Location = Point(500 - 64, +500 - 64);
			timer1->Enabled = true; //Start upload
			}
		else
	{
			MessageBox::Show("Serial Port is closed!", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
}
	int tiker=1;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		int conv_length;
		int conv_angle;
	
		if (tiker < numofpoints){	
			conv_length = static_cast<int>(In[tiker]->length);
			conv_angle = static_cast<int>(In[tiker]->angle);
			serialPort1->WriteLine("L" + conv_length + "A" + conv_angle);
			pictureBox1->Location = Point(Po[tiker]->getx() + 500 - 64, (Po[tiker]->gety() *-1) + 500 - 64);
			tiker = tiker + 1;
		}
		else if (tiker ==numofpoints)
		{
			timer1->Enabled = false;
			serialPort1->Close();
			MessageBox::Show("All points have been sent",
				"Attention", MessageBoxButtons::OK,
				MessageBoxIcon::Information);}
}

private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
		saveFileDialog1->ShowDialog();
		String^ filepath = saveFileDialog1->FileName;
		if (filepath!="")
		{
			StreamWriter^ plik = gcnew StreamWriter(filepath, true);
			int i;
			for (i = 1; i < numofpoints + 1; i++){
				plik->WriteLine((Po[i]->getx()).ToString() + ";" + (Po[i]->gety()).ToString());}
			plik->Close();
		}	
}
private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	String^ filepath = openFileDialog1->FileName;
	if (filepath != ""){
		StreamReader^ file = File::OpenText(filepath);
		String^ data;
		String^ x;
		String^ y;
		numofpoints = 0;

		while ((data = file->ReadLine()) != nullptr)
		{
			numofpoints++;
			x = data->Remove(data->IndexOf(';'));
			y = data->Remove(0, data->IndexOf(';') + 1);
			
			label1->Text = x;
			label2->Text = y;
			
			Po[numofpoints] = gcnew Cpoint(Convert::ToInt16(x), Convert::ToInt16(y));
			pictureBox1->Location = Point(Convert::ToInt16(x) + 500 - 64, (Convert::ToInt16(y)*-1) + 500 - 64);
			
			draw(Convert::ToInt16(x), Convert::ToInt16(y));
			label4->Text = numofpoints.ToString();
		}
		file->Close();
	}
}
};
}

//Mañczak 2019