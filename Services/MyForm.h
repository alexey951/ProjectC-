#pragma once
#include <stdio.h>
#include <Windows.h>
#include <winternl.h>
#include <iostream>

#pragma comment(lib,"ntdll.lib")

namespace Services {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñåÇàäà÷èToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ îáíîâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğóïíûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåëêèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïèñîêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûçîâÑïğàâêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âåáÑàéòTeachToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåÑëóæáûToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton9;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton10;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton11;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton12;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;


























	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåÇàäà÷èToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğóïíûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåëêèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûçîâÑïğàâêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âåáÑàéòTeachToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåÑëóæáûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton10 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton12 = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->äåéñòâèåToolStripMenuItem, this->âèäToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(957, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïàğàìåòğûToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû...";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// äåéñòâèåToolStripMenuItem
			// 
			this->äåéñòâèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem,
					this->âñåÇàäà÷èToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, this->ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem, this->ñïğàâêàToolStripMenuItem1
			});
			this->äåéñòâèåToolStripMenuItem->Name = L"äåéñòâèåToolStripMenuItem";
			this->äåéñòâèåToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèåToolStripMenuItem->Text = L"Äåéñòâèå";
			// 
			// ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem
			// 
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem->Name = L"ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem";
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem->Size = System::Drawing::Size(286, 22);
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem->Text = L"Ïîäêëş÷èòüñÿ ê äğóãîìó êîìïüşòåğó";
			// 
			// âñåÇàäà÷èToolStripMenuItem
			// 
			this->âñåÇàäà÷èToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1 });
			this->âñåÇàäà÷èToolStripMenuItem->Name = L"âñåÇàäà÷èToolStripMenuItem";
			this->âñåÇàäà÷èToolStripMenuItem->Size = System::Drawing::Size(286, 22);
			this->âñåÇàäà÷èToolStripMenuItem->Text = L"Âñå çàäà÷è";
			// 
			// ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1
			// 
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1->Name = L"ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1";
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1->Size = System::Drawing::Size(286, 22);
			this->ïîäêëş÷èòüñÿÊÄğóãîìóÊîìïüşòåğóToolStripMenuItem1->Text = L"Ïîäêëş÷èòüñÿ ê äğóãîìó êîìïüşòåğó";
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			this->îáíîâèòüToolStripMenuItem->Size = System::Drawing::Size(286, 22);
			this->îáíîâèòüToolStripMenuItem->Text = L"Îáíîâèòü";
			// 
			// ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem
			// 
			this->ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem->Name = L"ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem";
			this->ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem->Size = System::Drawing::Size(286, 22);
			this->ıêñïîğòèğîâàòüÑïèñîêToolStripMenuItem->Text = L"İêñïîğòèğîâàòü ñïèñîê";
			// 
			// ñïğàâêàToolStripMenuItem1
			// 
			this->ñïğàâêàToolStripMenuItem1->Name = L"ñïğàâêàToolStripMenuItem1";
			this->ñïğàâêàToolStripMenuItem1->Size = System::Drawing::Size(286, 22);
			this->ñïğàâêàToolStripMenuItem1->Text = L"Ñïğàâêà";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem,
					this->êğóïíûåToolStripMenuItem, this->ìåëêèåToolStripMenuItem, this->ñïèñîêToolStripMenuItem, this->òàáëèöàToolStripMenuItem,
					this->íàñòğîèòüToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem
			// 
			this->äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem->Name = L"äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem";
			this->äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->äîáàâèòüÈëèÓäàëèòüÑòîëáöûToolStripMenuItem->Text = L"Äîáàâèòü èëè óäàëèòü ñòîëáöû";
			// 
			// êğóïíûåToolStripMenuItem
			// 
			this->êğóïíûåToolStripMenuItem->Name = L"êğóïíûåToolStripMenuItem";
			this->êğóïíûåToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->êğóïíûåToolStripMenuItem->Text = L"Êğóïíûå ";
			// 
			// ìåëêèåToolStripMenuItem
			// 
			this->ìåëêèåToolStripMenuItem->Name = L"ìåëêèåToolStripMenuItem";
			this->ìåëêèåToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->ìåëêèåToolStripMenuItem->Text = L"Ìåëêèå";
			// 
			// ñïèñîêToolStripMenuItem
			// 
			this->ñïèñîêToolStripMenuItem->Name = L"ñïèñîêToolStripMenuItem";
			this->ñïèñîêToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->ñïèñîêToolStripMenuItem->Text = L"Ñïèñîê";
			// 
			// òàáëèöàToolStripMenuItem
			// 
			this->òàáëèöàToolStripMenuItem->Name = L"òàáëèöàToolStripMenuItem";
			this->òàáëèöàToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->òàáëèöàToolStripMenuItem->Text = L"Òàáëèöà";
			// 
			// íàñòğîèòüToolStripMenuItem
			// 
			this->íàñòğîèòüToolStripMenuItem->Name = L"íàñòğîèòüToolStripMenuItem";
			this->íàñòğîèòüToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->íàñòğîèòüToolStripMenuItem->Text = L"Íàñòğîèòü...";
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->âûçîâÑïğàâêèToolStripMenuItem,
					this->âåáÑàéòTeachToolStripMenuItem, this->îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem, this->îÏğîãğàììåÑëóæáûToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// âûçîâÑïğàâêèToolStripMenuItem
			// 
			this->âûçîâÑïğàâêèToolStripMenuItem->Name = L"âûçîâÑïğàâêèToolStripMenuItem";
			this->âûçîâÑïğàâêèToolStripMenuItem->Size = System::Drawing::Size(327, 22);
			this->âûçîâÑïğàâêèToolStripMenuItem->Text = L"Âûçîâ ñïğàâêè";
			// 
			// âåáÑàéòTeachToolStripMenuItem
			// 
			this->âåáÑàéòTeachToolStripMenuItem->Name = L"âåáÑàéòTeachToolStripMenuItem";
			this->âåáÑàéòTeachToolStripMenuItem->Size = System::Drawing::Size(327, 22);
			this->âåáÑàéòTeachToolStripMenuItem->Text = L"Âåá-Ñàéò Tech-Center";
			// 
			// îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem
			// 
			this->îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem->Name = L"îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem";
			this->îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem->Size = System::Drawing::Size(327, 22);
			this->îÏğîãğàììåÊîíñîëüÓïğàâëåíèÿÌÌÑToolStripMenuItem->Text = L"Î ïğîãğàììå \"Êîíñîëü óïğàâëåíèÿ (ÌÌÑ)\"...";
			// 
			// îÏğîãğàììåÑëóæáûToolStripMenuItem
			// 
			this->îÏğîãğàììåÑëóæáûToolStripMenuItem->Name = L"îÏğîãğàììåÑëóæáûToolStripMenuItem";
			this->îÏğîãğàììåÑëóæáûToolStripMenuItem->Size = System::Drawing::Size(327, 22);
			this->îÏğîãğàììåÑëóæáûToolStripMenuItem->Text = L"Î ïğîãğàììå \"Ñëóæáû\"...";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripSeparator1, this->toolStripButton3, this->toolStripSeparator2, this->toolStripButton4,
					this->toolStripButton5, this->toolStripSeparator3, this->toolStripButton6, this->toolStripButton7, this->toolStripSeparator4,
					this->toolStripButton8, this->toolStripButton9, this->toolStripButton10, this->toolStripButton11, this->toolStripButton12
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(957, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Ïåğåõîä íà îäèí øàã íàçàä";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Ïåğåõîä íà îäèí øàã âïåğåä";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Ñêğûòèå/îòîáğàæåíèå äåğåâà êîíñîëè";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"Îáíîâëåíèå";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"İêñïîğò ñïèñêà";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Ñïğàâêà";
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"Îòîáğàæåíèå è ñêğûòèå ïàíåëè äåéñâòèé";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(23, 22);
			this->toolStripButton8->Text = L"Âîçîáíîâëåíèå ñëóæáû";
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(23, 22);
			this->toolStripButton9->Text = L"Çàïóñê ñëóæáû";
			// 
			// toolStripButton10
			// 
			this->toolStripButton10->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton10.Image")));
			this->toolStripButton10->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton10->Name = L"toolStripButton10";
			this->toolStripButton10->Size = System::Drawing::Size(23, 22);
			this->toolStripButton10->Text = L"Îñòàíîâêà ñëóæáû";
			// 
			// toolStripButton11
			// 
			this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton11.Image")));
			this->toolStripButton11->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton11->Name = L"toolStripButton11";
			this->toolStripButton11->Size = System::Drawing::Size(23, 22);
			this->toolStripButton11->Text = L"Ïğèîñòàíîâêà ñëóæáû";
			// 
			// toolStripButton12
			// 
			this->toolStripButton12->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton12.Image")));
			this->toolStripButton12->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton12->Name = L"toolStripButton12";
			this->toolStripButton12->Size = System::Drawing::Size(23, 22);
			this->toolStripButton12->Text = L"Ïåğåçàïóñê ñëóæáû";
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Cursor = System::Windows::Forms::Cursors::SizeWE;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->splitContainer1->Location = System::Drawing::Point(0, 49);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::White;
			this->splitContainer1->Panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->AutoScroll = true;
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::White;
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView2);
			this->splitContainer1->Panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->splitContainer1->Size = System::Drawing::Size(957, 559);
			this->splitContainer1->SplitterDistance = 266;
			this->splitContainer1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeight = 25;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::InfoText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::Silver;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(685, 557);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Èìÿ";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Îïèñàíèå";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ñîñòîÿíèå";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 90;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Òèï çàïóñêà";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->FillWeight = 120;
			this->Column5->HeaderText = L"Âõîä îò èìåíè";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 130;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 608);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Ñëóæáû";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	};
}
