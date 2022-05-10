#pragma once

namespace TicTactical {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

		/// Fields
		int turn = 0;
		int numPlayers = 4;
		String^ s = "";
		bool play = true;
		bool dev = false;

		bool goodPlay = true;

		bool allowOverrides = false;
		bool playerOneOverride   = true;
		bool playerTwoOverride   = true;
		bool playerThreeOverride = true;
		bool playerFourOverride  = true;

		int playerOnePoints   = 0;
		int playerTwoPoints   = 0;
		int playerThreePoints = 0;
		int playerFourPoints  = 0;

	private: System::Windows::Forms::Button^ GridButton00;
	private: System::Windows::Forms::Panel^ GamePanel;

	private: System::Windows::Forms::Button^ GridButton55;
	private: System::Windows::Forms::Button^ GridButton54;
	private: System::Windows::Forms::Button^ GridButton53;
	private: System::Windows::Forms::Button^ GridButton52;
	private: System::Windows::Forms::Button^ GridButton51;
	private: System::Windows::Forms::Button^ GridButton50;

	private: System::Windows::Forms::Button^ GridButton45;
	private: System::Windows::Forms::Button^ GridButton44;
	private: System::Windows::Forms::Button^ GridButton43;
	private: System::Windows::Forms::Button^ GridButton42;
	private: System::Windows::Forms::Button^ GridButton41;
	private: System::Windows::Forms::Button^ GridButton40;

	private: System::Windows::Forms::Button^ GridButton35;
	private: System::Windows::Forms::Button^ GridButton34;
	private: System::Windows::Forms::Button^ GridButton33;
	private: System::Windows::Forms::Button^ GridButton32;
	private: System::Windows::Forms::Button^ GridButton31;
	private: System::Windows::Forms::Button^ GridButton30;

	private: System::Windows::Forms::Button^ GridButton25;
	private: System::Windows::Forms::Button^ GridButton24;
	private: System::Windows::Forms::Button^ GridButton23;
	private: System::Windows::Forms::Button^ GridButton22;
	private: System::Windows::Forms::Button^ GridButton21;
	private: System::Windows::Forms::Button^ GridButton20;

	private: System::Windows::Forms::Button^ GridButton15;
	private: System::Windows::Forms::Button^ GridButton14;
	private: System::Windows::Forms::Button^ GridButton13;
	private: System::Windows::Forms::Button^ GridButton12;
	private: System::Windows::Forms::Button^ GridButton11;
	private: System::Windows::Forms::Button^ GridButton10;

	private: System::Windows::Forms::Button^ GridButton05;
	private: System::Windows::Forms::Button^ GridButton04;
	private: System::Windows::Forms::Button^ GridButton03;
	private: System::Windows::Forms::Button^ GridButton02;
	private: System::Windows::Forms::Button^ GridButton01;

	private: System::Windows::Forms::Label^ TictacticalTitle;

	private: System::Windows::Forms::TextBox^ PlayerOneIcon;
	private: System::Windows::Forms::TextBox^ PlayerTwoIcon;
	private: System::Windows::Forms::TextBox^ PlayerThreeIcon;
	private: System::Windows::Forms::TextBox^ PlayerFourIcon;
	private: System::Windows::Forms::TextBox^ DisplayText;
	private: System::Windows::Forms::ListBox^ playerOneList;
	private: System::Windows::Forms::ListBox^ playerTwoList;
	private: System::Windows::Forms::ListBox^ playerThreeList;
	private: System::Windows::Forms::ListBox^ playerFourList;

	private: System::Windows::Forms::CheckBox^ allowOverrideCheckBox;
	private: System::Windows::Forms::NumericUpDown^ numberOfPlayers;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ creator;

	private: System::Windows::Forms::Button^ rulesButton;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ ActionButton;

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
		void InitializeComponent(void)
		{
			this->GridButton00 = (gcnew System::Windows::Forms::Button());
			this->GamePanel = (gcnew System::Windows::Forms::Panel());
			this->GridButton55 = (gcnew System::Windows::Forms::Button());
			this->GridButton54 = (gcnew System::Windows::Forms::Button());
			this->GridButton53 = (gcnew System::Windows::Forms::Button());
			this->GridButton52 = (gcnew System::Windows::Forms::Button());
			this->GridButton51 = (gcnew System::Windows::Forms::Button());
			this->GridButton50 = (gcnew System::Windows::Forms::Button());
			this->GridButton45 = (gcnew System::Windows::Forms::Button());
			this->GridButton44 = (gcnew System::Windows::Forms::Button());
			this->GridButton43 = (gcnew System::Windows::Forms::Button());
			this->GridButton42 = (gcnew System::Windows::Forms::Button());
			this->GridButton41 = (gcnew System::Windows::Forms::Button());
			this->GridButton40 = (gcnew System::Windows::Forms::Button());
			this->GridButton35 = (gcnew System::Windows::Forms::Button());
			this->GridButton34 = (gcnew System::Windows::Forms::Button());
			this->GridButton33 = (gcnew System::Windows::Forms::Button());
			this->GridButton32 = (gcnew System::Windows::Forms::Button());
			this->GridButton31 = (gcnew System::Windows::Forms::Button());
			this->GridButton30 = (gcnew System::Windows::Forms::Button());
			this->GridButton25 = (gcnew System::Windows::Forms::Button());
			this->GridButton24 = (gcnew System::Windows::Forms::Button());
			this->GridButton23 = (gcnew System::Windows::Forms::Button());
			this->GridButton22 = (gcnew System::Windows::Forms::Button());
			this->GridButton21 = (gcnew System::Windows::Forms::Button());
			this->GridButton20 = (gcnew System::Windows::Forms::Button());
			this->GridButton15 = (gcnew System::Windows::Forms::Button());
			this->GridButton14 = (gcnew System::Windows::Forms::Button());
			this->GridButton13 = (gcnew System::Windows::Forms::Button());
			this->GridButton12 = (gcnew System::Windows::Forms::Button());
			this->GridButton11 = (gcnew System::Windows::Forms::Button());
			this->GridButton10 = (gcnew System::Windows::Forms::Button());
			this->GridButton05 = (gcnew System::Windows::Forms::Button());
			this->GridButton04 = (gcnew System::Windows::Forms::Button());
			this->GridButton03 = (gcnew System::Windows::Forms::Button());
			this->GridButton02 = (gcnew System::Windows::Forms::Button());
			this->GridButton01 = (gcnew System::Windows::Forms::Button());
			this->TictacticalTitle = (gcnew System::Windows::Forms::Label());
			this->PlayerOneIcon = (gcnew System::Windows::Forms::TextBox());
			this->PlayerTwoIcon = (gcnew System::Windows::Forms::TextBox());
			this->PlayerThreeIcon = (gcnew System::Windows::Forms::TextBox());
			this->PlayerFourIcon = (gcnew System::Windows::Forms::TextBox());
			this->DisplayText = (gcnew System::Windows::Forms::TextBox());
			this->playerOneList = (gcnew System::Windows::Forms::ListBox());
			this->playerTwoList = (gcnew System::Windows::Forms::ListBox());
			this->playerThreeList = (gcnew System::Windows::Forms::ListBox());
			this->playerFourList = (gcnew System::Windows::Forms::ListBox());
			this->allowOverrideCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->numberOfPlayers = (gcnew System::Windows::Forms::NumericUpDown());
			this->ActionButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->creator = (gcnew System::Windows::Forms::Label());
			this->rulesButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->GamePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberOfPlayers))->BeginInit();
			this->SuspendLayout();
			// 
			// GridButton00
			// 
			this->GridButton00->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton00->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton00->ForeColor = System::Drawing::Color::Lime;
			this->GridButton00->Location = System::Drawing::Point(3, 3);
			this->GridButton00->Name = L"GridButton00";
			this->GridButton00->Size = System::Drawing::Size(55, 55);
			this->GridButton00->TabIndex = 0;
			this->GridButton00->UseVisualStyleBackColor = false;
			this->GridButton00->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GamePanel
			// 
			this->GamePanel->BackColor = System::Drawing::Color::Black;
			this->GamePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->GamePanel->Controls->Add(this->GridButton55);
			this->GamePanel->Controls->Add(this->GridButton54);
			this->GamePanel->Controls->Add(this->GridButton53);
			this->GamePanel->Controls->Add(this->GridButton52);
			this->GamePanel->Controls->Add(this->GridButton51);
			this->GamePanel->Controls->Add(this->GridButton50);
			this->GamePanel->Controls->Add(this->GridButton45);
			this->GamePanel->Controls->Add(this->GridButton44);
			this->GamePanel->Controls->Add(this->GridButton43);
			this->GamePanel->Controls->Add(this->GridButton42);
			this->GamePanel->Controls->Add(this->GridButton41);
			this->GamePanel->Controls->Add(this->GridButton40);
			this->GamePanel->Controls->Add(this->GridButton35);
			this->GamePanel->Controls->Add(this->GridButton34);
			this->GamePanel->Controls->Add(this->GridButton33);
			this->GamePanel->Controls->Add(this->GridButton32);
			this->GamePanel->Controls->Add(this->GridButton31);
			this->GamePanel->Controls->Add(this->GridButton30);
			this->GamePanel->Controls->Add(this->GridButton25);
			this->GamePanel->Controls->Add(this->GridButton24);
			this->GamePanel->Controls->Add(this->GridButton23);
			this->GamePanel->Controls->Add(this->GridButton22);
			this->GamePanel->Controls->Add(this->GridButton21);
			this->GamePanel->Controls->Add(this->GridButton20);
			this->GamePanel->Controls->Add(this->GridButton15);
			this->GamePanel->Controls->Add(this->GridButton14);
			this->GamePanel->Controls->Add(this->GridButton13);
			this->GamePanel->Controls->Add(this->GridButton12);
			this->GamePanel->Controls->Add(this->GridButton11);
			this->GamePanel->Controls->Add(this->GridButton10);
			this->GamePanel->Controls->Add(this->GridButton05);
			this->GamePanel->Controls->Add(this->GridButton04);
			this->GamePanel->Controls->Add(this->GridButton03);
			this->GamePanel->Controls->Add(this->GridButton02);
			this->GamePanel->Controls->Add(this->GridButton01);
			this->GamePanel->Controls->Add(this->GridButton00);
			this->GamePanel->Cursor = System::Windows::Forms::Cursors::Cross;
			this->GamePanel->Enabled = false;
			this->GamePanel->Location = System::Drawing::Point(81, 108);
			this->GamePanel->Name = L"GamePanel";
			this->GamePanel->Size = System::Drawing::Size(367, 368);
			this->GamePanel->TabIndex = 1;
			// 
			// GridButton55
			// 
			this->GridButton55->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton55->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton55->ForeColor = System::Drawing::Color::Lime;
			this->GridButton55->Location = System::Drawing::Point(308, 308);
			this->GridButton55->Name = L"GridButton55";
			this->GridButton55->Size = System::Drawing::Size(55, 55);
			this->GridButton55->TabIndex = 35;
			this->GridButton55->UseVisualStyleBackColor = false;
			this->GridButton55->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton54
			// 
			this->GridButton54->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton54->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton54->ForeColor = System::Drawing::Color::Lime;
			this->GridButton54->Location = System::Drawing::Point(247, 308);
			this->GridButton54->Name = L"GridButton54";
			this->GridButton54->Size = System::Drawing::Size(55, 55);
			this->GridButton54->TabIndex = 34;
			this->GridButton54->UseVisualStyleBackColor = false;
			this->GridButton54->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton53
			// 
			this->GridButton53->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton53->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton53->ForeColor = System::Drawing::Color::Lime;
			this->GridButton53->Location = System::Drawing::Point(186, 308);
			this->GridButton53->Name = L"GridButton53";
			this->GridButton53->Size = System::Drawing::Size(55, 55);
			this->GridButton53->TabIndex = 33;
			this->GridButton53->UseVisualStyleBackColor = false;
			this->GridButton53->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton52
			// 
			this->GridButton52->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton52->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton52->ForeColor = System::Drawing::Color::Lime;
			this->GridButton52->Location = System::Drawing::Point(125, 308);
			this->GridButton52->Name = L"GridButton52";
			this->GridButton52->Size = System::Drawing::Size(55, 55);
			this->GridButton52->TabIndex = 32;
			this->GridButton52->UseVisualStyleBackColor = false;
			this->GridButton52->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton51
			// 
			this->GridButton51->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton51->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton51->ForeColor = System::Drawing::Color::Lime;
			this->GridButton51->Location = System::Drawing::Point(64, 308);
			this->GridButton51->Name = L"GridButton51";
			this->GridButton51->Size = System::Drawing::Size(55, 55);
			this->GridButton51->TabIndex = 31;
			this->GridButton51->UseVisualStyleBackColor = false;
			this->GridButton51->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton50
			// 
			this->GridButton50->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton50->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton50->ForeColor = System::Drawing::Color::Lime;
			this->GridButton50->Location = System::Drawing::Point(3, 308);
			this->GridButton50->Name = L"GridButton50";
			this->GridButton50->Size = System::Drawing::Size(55, 55);
			this->GridButton50->TabIndex = 30;
			this->GridButton50->UseVisualStyleBackColor = false;
			this->GridButton50->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton45
			// 
			this->GridButton45->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton45->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton45->ForeColor = System::Drawing::Color::Lime;
			this->GridButton45->Location = System::Drawing::Point(308, 247);
			this->GridButton45->Name = L"GridButton45";
			this->GridButton45->Size = System::Drawing::Size(55, 55);
			this->GridButton45->TabIndex = 29;
			this->GridButton45->UseVisualStyleBackColor = false;
			this->GridButton45->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton44
			// 
			this->GridButton44->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton44->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton44->ForeColor = System::Drawing::Color::Lime;
			this->GridButton44->Location = System::Drawing::Point(247, 247);
			this->GridButton44->Name = L"GridButton44";
			this->GridButton44->Size = System::Drawing::Size(55, 55);
			this->GridButton44->TabIndex = 28;
			this->GridButton44->UseVisualStyleBackColor = false;
			this->GridButton44->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton43
			// 
			this->GridButton43->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton43->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton43->ForeColor = System::Drawing::Color::Lime;
			this->GridButton43->Location = System::Drawing::Point(186, 247);
			this->GridButton43->Name = L"GridButton43";
			this->GridButton43->Size = System::Drawing::Size(55, 55);
			this->GridButton43->TabIndex = 27;
			this->GridButton43->UseVisualStyleBackColor = false;
			this->GridButton43->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton42
			// 
			this->GridButton42->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton42->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton42->ForeColor = System::Drawing::Color::Lime;
			this->GridButton42->Location = System::Drawing::Point(125, 247);
			this->GridButton42->Name = L"GridButton42";
			this->GridButton42->Size = System::Drawing::Size(55, 55);
			this->GridButton42->TabIndex = 26;
			this->GridButton42->UseVisualStyleBackColor = false;
			this->GridButton42->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton41
			// 
			this->GridButton41->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton41->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton41->ForeColor = System::Drawing::Color::Lime;
			this->GridButton41->Location = System::Drawing::Point(64, 247);
			this->GridButton41->Name = L"GridButton41";
			this->GridButton41->Size = System::Drawing::Size(55, 55);
			this->GridButton41->TabIndex = 25;
			this->GridButton41->UseVisualStyleBackColor = false;
			this->GridButton41->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton40
			// 
			this->GridButton40->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton40->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton40->ForeColor = System::Drawing::Color::Lime;
			this->GridButton40->Location = System::Drawing::Point(3, 247);
			this->GridButton40->Name = L"GridButton40";
			this->GridButton40->Size = System::Drawing::Size(55, 55);
			this->GridButton40->TabIndex = 24;
			this->GridButton40->UseVisualStyleBackColor = false;
			this->GridButton40->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton35
			// 
			this->GridButton35->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton35->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton35->ForeColor = System::Drawing::Color::Lime;
			this->GridButton35->Location = System::Drawing::Point(308, 186);
			this->GridButton35->Name = L"GridButton35";
			this->GridButton35->Size = System::Drawing::Size(55, 55);
			this->GridButton35->TabIndex = 23;
			this->GridButton35->UseVisualStyleBackColor = false;
			this->GridButton35->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton34
			// 
			this->GridButton34->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton34->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton34->ForeColor = System::Drawing::Color::Lime;
			this->GridButton34->Location = System::Drawing::Point(247, 186);
			this->GridButton34->Name = L"GridButton34";
			this->GridButton34->Size = System::Drawing::Size(55, 55);
			this->GridButton34->TabIndex = 22;
			this->GridButton34->UseVisualStyleBackColor = false;
			this->GridButton34->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton33
			// 
			this->GridButton33->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton33->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton33->ForeColor = System::Drawing::Color::Lime;
			this->GridButton33->Location = System::Drawing::Point(186, 186);
			this->GridButton33->Name = L"GridButton33";
			this->GridButton33->Size = System::Drawing::Size(55, 55);
			this->GridButton33->TabIndex = 21;
			this->GridButton33->UseVisualStyleBackColor = false;
			this->GridButton33->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton32
			// 
			this->GridButton32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton32->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton32->ForeColor = System::Drawing::Color::Lime;
			this->GridButton32->Location = System::Drawing::Point(125, 186);
			this->GridButton32->Name = L"GridButton32";
			this->GridButton32->Size = System::Drawing::Size(55, 55);
			this->GridButton32->TabIndex = 20;
			this->GridButton32->UseVisualStyleBackColor = false;
			this->GridButton32->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton31
			// 
			this->GridButton31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton31->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton31->ForeColor = System::Drawing::Color::Lime;
			this->GridButton31->Location = System::Drawing::Point(64, 186);
			this->GridButton31->Name = L"GridButton31";
			this->GridButton31->Size = System::Drawing::Size(55, 55);
			this->GridButton31->TabIndex = 19;
			this->GridButton31->UseVisualStyleBackColor = false;
			this->GridButton31->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton30
			// 
			this->GridButton30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton30->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton30->ForeColor = System::Drawing::Color::Lime;
			this->GridButton30->Location = System::Drawing::Point(3, 186);
			this->GridButton30->Name = L"GridButton30";
			this->GridButton30->Size = System::Drawing::Size(55, 55);
			this->GridButton30->TabIndex = 18;
			this->GridButton30->UseVisualStyleBackColor = false;
			this->GridButton30->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton25
			// 
			this->GridButton25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton25->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton25->ForeColor = System::Drawing::Color::Lime;
			this->GridButton25->Location = System::Drawing::Point(308, 125);
			this->GridButton25->Name = L"GridButton25";
			this->GridButton25->Size = System::Drawing::Size(55, 55);
			this->GridButton25->TabIndex = 17;
			this->GridButton25->UseVisualStyleBackColor = false;
			this->GridButton25->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton24
			// 
			this->GridButton24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton24->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton24->ForeColor = System::Drawing::Color::Lime;
			this->GridButton24->Location = System::Drawing::Point(247, 125);
			this->GridButton24->Name = L"GridButton24";
			this->GridButton24->Size = System::Drawing::Size(55, 55);
			this->GridButton24->TabIndex = 16;
			this->GridButton24->UseVisualStyleBackColor = false;
			this->GridButton24->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton23
			// 
			this->GridButton23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton23->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton23->ForeColor = System::Drawing::Color::Lime;
			this->GridButton23->Location = System::Drawing::Point(186, 125);
			this->GridButton23->Name = L"GridButton23";
			this->GridButton23->Size = System::Drawing::Size(55, 55);
			this->GridButton23->TabIndex = 15;
			this->GridButton23->UseVisualStyleBackColor = false;
			this->GridButton23->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton22
			// 
			this->GridButton22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton22->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton22->ForeColor = System::Drawing::Color::Lime;
			this->GridButton22->Location = System::Drawing::Point(125, 125);
			this->GridButton22->Name = L"GridButton22";
			this->GridButton22->Size = System::Drawing::Size(55, 55);
			this->GridButton22->TabIndex = 14;
			this->GridButton22->UseVisualStyleBackColor = false;
			this->GridButton22->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton21
			// 
			this->GridButton21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton21->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton21->ForeColor = System::Drawing::Color::Lime;
			this->GridButton21->Location = System::Drawing::Point(64, 125);
			this->GridButton21->Name = L"GridButton21";
			this->GridButton21->Size = System::Drawing::Size(55, 55);
			this->GridButton21->TabIndex = 13;
			this->GridButton21->UseVisualStyleBackColor = false;
			this->GridButton21->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton20
			// 
			this->GridButton20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton20->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton20->ForeColor = System::Drawing::Color::Lime;
			this->GridButton20->Location = System::Drawing::Point(3, 125);
			this->GridButton20->Name = L"GridButton20";
			this->GridButton20->Size = System::Drawing::Size(55, 55);
			this->GridButton20->TabIndex = 12;
			this->GridButton20->UseVisualStyleBackColor = false;
			this->GridButton20->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton15
			// 
			this->GridButton15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton15->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton15->ForeColor = System::Drawing::Color::Lime;
			this->GridButton15->Location = System::Drawing::Point(308, 64);
			this->GridButton15->Name = L"GridButton15";
			this->GridButton15->Size = System::Drawing::Size(55, 55);
			this->GridButton15->TabIndex = 11;
			this->GridButton15->UseVisualStyleBackColor = false;
			this->GridButton15->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton14
			// 
			this->GridButton14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton14->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton14->ForeColor = System::Drawing::Color::Lime;
			this->GridButton14->Location = System::Drawing::Point(247, 64);
			this->GridButton14->Name = L"GridButton14";
			this->GridButton14->Size = System::Drawing::Size(55, 55);
			this->GridButton14->TabIndex = 10;
			this->GridButton14->UseVisualStyleBackColor = false;
			this->GridButton14->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton13
			// 
			this->GridButton13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton13->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton13->ForeColor = System::Drawing::Color::Lime;
			this->GridButton13->Location = System::Drawing::Point(186, 64);
			this->GridButton13->Name = L"GridButton13";
			this->GridButton13->Size = System::Drawing::Size(55, 55);
			this->GridButton13->TabIndex = 9;
			this->GridButton13->UseVisualStyleBackColor = false;
			this->GridButton13->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton12
			// 
			this->GridButton12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton12->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton12->ForeColor = System::Drawing::Color::Lime;
			this->GridButton12->Location = System::Drawing::Point(125, 64);
			this->GridButton12->Name = L"GridButton12";
			this->GridButton12->Size = System::Drawing::Size(55, 55);
			this->GridButton12->TabIndex = 8;
			this->GridButton12->UseVisualStyleBackColor = false;
			this->GridButton12->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton11
			// 
			this->GridButton11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton11->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton11->ForeColor = System::Drawing::Color::Lime;
			this->GridButton11->Location = System::Drawing::Point(64, 64);
			this->GridButton11->Name = L"GridButton11";
			this->GridButton11->Size = System::Drawing::Size(55, 55);
			this->GridButton11->TabIndex = 7;
			this->GridButton11->UseVisualStyleBackColor = false;
			this->GridButton11->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton10
			// 
			this->GridButton10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton10->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton10->ForeColor = System::Drawing::Color::Lime;
			this->GridButton10->Location = System::Drawing::Point(3, 64);
			this->GridButton10->Name = L"GridButton10";
			this->GridButton10->Size = System::Drawing::Size(55, 55);
			this->GridButton10->TabIndex = 6;
			this->GridButton10->UseVisualStyleBackColor = false;
			this->GridButton10->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton05
			// 
			this->GridButton05->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton05->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton05->ForeColor = System::Drawing::Color::Lime;
			this->GridButton05->Location = System::Drawing::Point(308, 3);
			this->GridButton05->Name = L"GridButton05";
			this->GridButton05->Size = System::Drawing::Size(55, 55);
			this->GridButton05->TabIndex = 5;
			this->GridButton05->UseVisualStyleBackColor = false;
			this->GridButton05->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton04
			// 
			this->GridButton04->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton04->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton04->ForeColor = System::Drawing::Color::Lime;
			this->GridButton04->Location = System::Drawing::Point(247, 3);
			this->GridButton04->Name = L"GridButton04";
			this->GridButton04->Size = System::Drawing::Size(55, 55);
			this->GridButton04->TabIndex = 4;
			this->GridButton04->UseVisualStyleBackColor = false;
			this->GridButton04->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton03
			// 
			this->GridButton03->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton03->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton03->ForeColor = System::Drawing::Color::Lime;
			this->GridButton03->Location = System::Drawing::Point(186, 3);
			this->GridButton03->Name = L"GridButton03";
			this->GridButton03->Size = System::Drawing::Size(55, 55);
			this->GridButton03->TabIndex = 3;
			this->GridButton03->UseVisualStyleBackColor = false;
			this->GridButton03->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton02
			// 
			this->GridButton02->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton02->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton02->ForeColor = System::Drawing::Color::Lime;
			this->GridButton02->Location = System::Drawing::Point(125, 3);
			this->GridButton02->Name = L"GridButton02";
			this->GridButton02->Size = System::Drawing::Size(55, 55);
			this->GridButton02->TabIndex = 2;
			this->GridButton02->UseVisualStyleBackColor = false;
			this->GridButton02->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// GridButton01
			// 
			this->GridButton01->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GridButton01->Font = (gcnew System::Drawing::Font(L"Nasalization", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GridButton01->ForeColor = System::Drawing::Color::Lime;
			this->GridButton01->Location = System::Drawing::Point(64, 3);
			this->GridButton01->Name = L"GridButton01";
			this->GridButton01->Size = System::Drawing::Size(55, 55);
			this->GridButton01->TabIndex = 1;
			this->GridButton01->UseVisualStyleBackColor = false;
			this->GridButton01->Click += gcnew System::EventHandler(this, &MainForm::GridButton00_Click);
			// 
			// TictacticalTitle
			// 
			this->TictacticalTitle->AutoSize = true;
			this->TictacticalTitle->Font = (gcnew System::Drawing::Font(L"Nasalization", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TictacticalTitle->ForeColor = System::Drawing::Color::Lime;
			this->TictacticalTitle->Location = System::Drawing::Point(118, 9);
			this->TictacticalTitle->Name = L"TictacticalTitle";
			this->TictacticalTitle->Size = System::Drawing::Size(320, 42);
			this->TictacticalTitle->TabIndex = 2;
			this->TictacticalTitle->Text = L"Tic-Tactical";
			// 
			// PlayerOneIcon
			// 
			this->PlayerOneIcon->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerOneIcon->Location = System::Drawing::Point(85, 82);
			this->PlayerOneIcon->MaxLength = 2;
			this->PlayerOneIcon->Name = L"PlayerOneIcon";
			this->PlayerOneIcon->Size = System::Drawing::Size(56, 20);
			this->PlayerOneIcon->TabIndex = 8;
			this->PlayerOneIcon->Text = L"X";
			this->PlayerOneIcon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PlayerTwoIcon
			// 
			this->PlayerTwoIcon->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerTwoIcon->Location = System::Drawing::Point(189, 82);
			this->PlayerTwoIcon->MaxLength = 2;
			this->PlayerTwoIcon->Name = L"PlayerTwoIcon";
			this->PlayerTwoIcon->Size = System::Drawing::Size(56, 20);
			this->PlayerTwoIcon->TabIndex = 9;
			this->PlayerTwoIcon->Text = L"O";
			this->PlayerTwoIcon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PlayerThreeIcon
			// 
			this->PlayerThreeIcon->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerThreeIcon->Location = System::Drawing::Point(287, 82);
			this->PlayerThreeIcon->MaxLength = 2;
			this->PlayerThreeIcon->Name = L"PlayerThreeIcon";
			this->PlayerThreeIcon->Size = System::Drawing::Size(56, 20);
			this->PlayerThreeIcon->TabIndex = 10;
			this->PlayerThreeIcon->Text = L"H";
			this->PlayerThreeIcon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PlayerFourIcon
			// 
			this->PlayerFourIcon->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerFourIcon->Location = System::Drawing::Point(390, 82);
			this->PlayerFourIcon->MaxLength = 2;
			this->PlayerFourIcon->Name = L"PlayerFourIcon";
			this->PlayerFourIcon->Size = System::Drawing::Size(56, 20);
			this->PlayerFourIcon->TabIndex = 11;
			this->PlayerFourIcon->Text = L"Y";
			this->PlayerFourIcon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DisplayText
			// 
			this->DisplayText->BackColor = System::Drawing::Color::Black;
			this->DisplayText->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayText->ForeColor = System::Drawing::Color::Lime;
			this->DisplayText->Location = System::Drawing::Point(85, 482);
			this->DisplayText->Name = L"DisplayText";
			this->DisplayText->ReadOnly = true;
			this->DisplayText->Size = System::Drawing::Size(363, 23);
			this->DisplayText->TabIndex = 12;
			this->DisplayText->Text = L"Welcome to Tic-Tactical! Press Play to begin . . .";
			this->DisplayText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// playerOneList
			// 
			this->playerOneList->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->playerOneList->ForeColor = System::Drawing::Color::Lime;
			this->playerOneList->FormattingEnabled = true;
			this->playerOneList->Location = System::Drawing::Point(12, 112);
			this->playerOneList->Name = L"playerOneList";
			this->playerOneList->Size = System::Drawing::Size(60, 160);
			this->playerOneList->TabIndex = 13;
			this->playerOneList->Visible = false;
			// 
			// playerTwoList
			// 
			this->playerTwoList->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->playerTwoList->ForeColor = System::Drawing::Color::Lime;
			this->playerTwoList->FormattingEnabled = true;
			this->playerTwoList->Location = System::Drawing::Point(12, 312);
			this->playerTwoList->Name = L"playerTwoList";
			this->playerTwoList->Size = System::Drawing::Size(60, 160);
			this->playerTwoList->TabIndex = 14;
			this->playerTwoList->Visible = false;
			// 
			// playerThreeList
			// 
			this->playerThreeList->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->playerThreeList->ForeColor = System::Drawing::Color::Lime;
			this->playerThreeList->FormattingEnabled = true;
			this->playerThreeList->Location = System::Drawing::Point(462, 112);
			this->playerThreeList->Name = L"playerThreeList";
			this->playerThreeList->Size = System::Drawing::Size(60, 160);
			this->playerThreeList->TabIndex = 15;
			this->playerThreeList->Visible = false;
			// 
			// playerFourList
			// 
			this->playerFourList->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->playerFourList->ForeColor = System::Drawing::Color::Lime;
			this->playerFourList->FormattingEnabled = true;
			this->playerFourList->Location = System::Drawing::Point(462, 312);
			this->playerFourList->Name = L"playerFourList";
			this->playerFourList->Size = System::Drawing::Size(60, 160);
			this->playerFourList->TabIndex = 16;
			this->playerFourList->Visible = false;
			// 
			// allowOverrideCheckBox
			// 
			this->allowOverrideCheckBox->AutoSize = true;
			this->allowOverrideCheckBox->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->allowOverrideCheckBox->Location = System::Drawing::Point(352, 536);
			this->allowOverrideCheckBox->Name = L"allowOverrideCheckBox";
			this->allowOverrideCheckBox->Size = System::Drawing::Size(15, 14);
			this->allowOverrideCheckBox->TabIndex = 17;
			this->allowOverrideCheckBox->UseVisualStyleBackColor = true;
			this->allowOverrideCheckBox->Click += gcnew System::EventHandler(this, &MainForm::allowOverrideCheckBox_CheckedChanged);
			// 
			// numberOfPlayers
			// 
			this->numberOfPlayers->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->numberOfPlayers->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberOfPlayers->ForeColor = System::Drawing::Color::Lime;
			this->numberOfPlayers->Location = System::Drawing::Point(214, 531);
			this->numberOfPlayers->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numberOfPlayers->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numberOfPlayers->Name = L"numberOfPlayers";
			this->numberOfPlayers->Size = System::Drawing::Size(43, 25);
			this->numberOfPlayers->TabIndex = 18;
			this->numberOfPlayers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numberOfPlayers->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// ActionButton
			// 
			this->ActionButton->BackColor = System::Drawing::Color::Black;
			this->ActionButton->Font = (gcnew System::Drawing::Font(L"Nasalization", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ActionButton->ForeColor = System::Drawing::Color::Lime;
			this->ActionButton->Location = System::Drawing::Point(104, 511);
			this->ActionButton->Name = L"ActionButton";
			this->ActionButton->Size = System::Drawing::Size(79, 49);
			this->ActionButton->TabIndex = 19;
			this->ActionButton->Text = L"Play";
			this->ActionButton->UseVisualStyleBackColor = false;
			this->ActionButton->Click += gcnew System::EventHandler(this, &MainForm::ActionButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(83, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 12);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Player 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(187, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 12);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Player 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(285, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 12);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Player 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(388, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 12);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Player 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(205, 516);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 12);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Players";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(295, 516);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 12);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Allow Overrides";
			// 
			// creator
			// 
			this->creator->AutoSize = true;
			this->creator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creator->ForeColor = System::Drawing::Color::Lime;
			this->creator->Location = System::Drawing::Point(441, 550);
			this->creator->Name = L"creator";
			this->creator->Size = System::Drawing::Size(91, 12);
			this->creator->TabIndex = 26;
			this->creator->Text = L"Created by Samurike";
			this->creator->Visible = false;
			// 
			// rulesButton
			// 
			this->rulesButton->BackColor = System::Drawing::Color::Black;
			this->rulesButton->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rulesButton->ForeColor = System::Drawing::Color::Lime;
			this->rulesButton->Location = System::Drawing::Point(12, 12);
			this->rulesButton->Name = L"rulesButton";
			this->rulesButton->Size = System::Drawing::Size(60, 42);
			this->rulesButton->TabIndex = 27;
			this->rulesButton->Text = L"Rules";
			this->rulesButton->UseVisualStyleBackColor = false;
			this->rulesButton->Click += gcnew System::EventHandler(this, &MainForm::rulesButton_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nasalization", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(462, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 42);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Dev";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(534, 571);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->rulesButton);
			this->Controls->Add(this->creator);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ActionButton);
			this->Controls->Add(this->playerFourList);
			this->Controls->Add(this->numberOfPlayers);
			this->Controls->Add(this->allowOverrideCheckBox);
			this->Controls->Add(this->playerThreeList);
			this->Controls->Add(this->DisplayText);
			this->Controls->Add(this->PlayerFourIcon);
			this->Controls->Add(this->playerTwoList);
			this->Controls->Add(this->playerOneList);
			this->Controls->Add(this->PlayerThreeIcon);
			this->Controls->Add(this->PlayerTwoIcon);
			this->Controls->Add(this->PlayerOneIcon);
			this->Controls->Add(this->TictacticalTitle);
			this->Controls->Add(this->GamePanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Tic-Tactical";
			this->GamePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberOfPlayers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {}

	private: System::Void GridButton00_Click(System::Object^ sender, System::EventArgs^ e) {
		HandleTurn((Button^) sender);
	}

	private: System::Void BubbleSort(ListBox^ list)
	{
		int i, j, temp;
		bool swapped;

		for (i = 0; i < (int)list->Items->Count - 1; i++)
		{
			for (j = 0; j < (int)list->Items->Count - i - 1; j++)
			{
				if ((int)list->Items[j] < (int)list->Items[j + 1])
				{
					temp = (int)list->Items[j];
					list->Items[j] = (int)list->Items[j + 1];
					list->Items[j + 1] = temp;
					swapped = true;
				}
			}
		}
	}

	private: int CalculateScore(ListBox^ list, int score)
	{
		for(int i = 0; i < list->Items->Count; i++)
		{	
			// check for horizontal points up to 5 in a row
			if ((i + 1) < list->Items->Count && (int)list->Items[i] - (int)list->Items[i + 1] == 1)
			{
				if ((i + 2) < list->Items->Count && (int)list->Items[i] - (int)list->Items[i + 2] == 2)
				{
					score += 1;
				}
			}

			for (int j = i; j < list->Items->Count; j++)
			{
				// check for vertical points up to 5 in a row
				if ((int)list->Items[i] - (int)list->Items[j] == 10)
				{
					for (int k = j; k < list->Items->Count; k++)
					{
						if ((int)list->Items[j] - (int)list->Items[k] == 10)
						{
							score += 1;
						}
					}
				}
				// check for left bottom diagonal points up to 5 in a row
				if ((int)list->Items[i] - (int)list->Items[j] == 9)
				{
					for (int k = j; k < list->Items->Count; k++)
					{
						if ((int)list->Items[j] - (int)list->Items[k] == 9)
						{
							score += 1;
						}
					}
				}
				// check for right bottom diagonal points up to 5 in a row
				if ((int)list->Items[i] - (int)list->Items[j] == 11)
				{
					for (int k = j; k < list->Items->Count; k++)
					{
						if ((int)list->Items[j] - (int)list->Items[k] == 11)
						{
							score += 1;
						}
					}
				}
			}
		}

		return score;
	}

	private: System::Void CheckForGameEnd()
	{
		if((playerFourList->Items->Count + playerThreeList->Items->Count + playerTwoList->Items->Count + playerOneList->Items->Count) == 36) {
			
			DisplayText->Text = "Game Over! ";

			// Sorting Algorithm - Simplicity over complexity due to low number with board layout
			BubbleSort(playerOneList);
			BubbleSort(playerTwoList);
			BubbleSort(playerThreeList);
			BubbleSort(playerFourList);

			playerOnePoints   = CalculateScore(playerOneList,   0);
			playerTwoPoints   = CalculateScore(playerTwoList,   0);
			playerThreePoints = CalculateScore(playerThreeList, 0);
			playerFourPoints  = CalculateScore(playerFourList,  0);

			int max = 0;
			int max1 = 0; 
			int max2 = 0;
			String^ winner  = "";
			String^ winner1 = "";
			String^ winner2 = "";
			
			if (playerOnePoints > playerTwoPoints)
			{
				max1 = playerOnePoints;
				winner1 = "1";
			}
			else if (playerTwoPoints > playerOnePoints)
			{
				max1 = playerTwoPoints;
				winner1 = "2";
			}
			if (playerThreePoints > playerFourPoints)
			{
				max2 = playerThreePoints;
				winner2 = "3";
			}
			else if (playerFourPoints > playerThreePoints)
			{
				max2 = playerFourPoints;
				winner2 = "4";
			}
				
			if (max1 > max2)
			{
				max = max1;
				winner = winner1;
			}
			else if (max2 > max1)
			{
				max = max2;
				winner = winner2;
			}
			else
				max = -1;

			if (max != -1)
			{
				DisplayText->Text += "Player " + winner + " wins with " + max + " point(s)!";
			}
			else
			{
				DisplayText->Text += "Draw! No winner has been declared.";
			}
			allowOverrideCheckBox->Enabled = true;
		}
	}

	private: System::Void NextTurnHandler() 
	{
		if (goodPlay) 
		{
			if (numPlayers == 2)
			{
				if (this->turn == 1) {
					DisplayText->Text = "It is now Player 1s (" + PlayerOneIcon->Text + ")" + " turn!";
					this->turn = 0;
				}
				else {
					DisplayText->Text = "It is now Player 2s (" + PlayerTwoIcon->Text + ")" + " turn!";
					this->turn++;
				}
			}
			if (numPlayers == 3)
			{
				if (this->turn == 2) 
				{
					DisplayText->Text = "It is now Player 1s (" + PlayerOneIcon->Text + ")" + " turn!";
					this->turn = 0;
				}
				else if (this->turn == 1)
				{
					DisplayText->Text = "It is now Player 3s (" + PlayerThreeIcon->Text + ")" + " turn!";
					this->turn++;
				}
				else {
					DisplayText->Text = "It is now Player 2s (" + PlayerTwoIcon->Text + ")" + " turn!";
					this->turn++;
				}
			}
			if (numPlayers == 4)
			{
				if (this->turn == 3) {
					DisplayText->Text = "It is now Player 1s (" + PlayerOneIcon->Text + ")" + " turn!";
					this->turn = 0;
				}
				else if (this->turn == 2)
				{
					DisplayText->Text = "It is now Player 4s (" + PlayerFourIcon->Text + ")" + " turn!";
					this->turn++;
				}
				else if (this->turn == 1)
				{
					DisplayText->Text = "It is now Player 3s (" + PlayerThreeIcon->Text + ")" + " turn!";
					this->turn++;
				}
				else {
					DisplayText->Text = "It is now Player 2s (" + PlayerTwoIcon->Text + ")" + " turn!";
					this->turn++;
				}
			}
		}
		else {
			goodPlay = true;
		}
	}

	private: System::Void OverrideHandler(ListBox^ list, Button^ button)
	{
		list->Items->Add(Convert::ToInt32(button->Name[button->Name->Length - 2] + "" + button->Name[button->Name->Length - 1]));

		for (int i = 0; i < playerOneList->Items->Count; i++) {

			if (list->Items->Contains(playerOneList->Items[i]) && this->turn != 0)
			{
				playerOneList->Items->RemoveAt(i);
			}
		}
		for (int i = 0; i < playerTwoList->Items->Count; i++) {

			if (list->Items->Contains(playerTwoList->Items[i]) && this->turn != 1)
			{
				playerTwoList->Items->RemoveAt(i);
			}
		}
		for (int i = 0; i < playerThreeList->Items->Count; i++) {

			if (list->Items->Contains(playerThreeList->Items[i]) && this->turn != 2)
			{
				playerThreeList->Items->RemoveAt(i);
			}
		}
		for (int i = 0; i < playerFourList->Items->Count; i++) {

			if (list->Items->Contains(playerFourList->Items[i]) && this->turn != 3)
			{
				playerFourList->Items->RemoveAt(i);
			}
		}
	}

	private: System::Void HandleTurn(Button^ b)
	{
		switch (this->turn) 
		{
			case 0:
				if (b->Text == "") {
					b->Text = PlayerOneIcon->Text;
					playerOneList->Items->Add(Convert::ToInt32(b->Name[b->Name->Length - 2] + "" + b->Name[b->Name->Length - 1]));
				}
				else
				{
					if (allowOverrides && b->Text != PlayerOneIcon->Text && playerOneOverride)
					{
						OverrideHandler(playerOneList, b);
						b->Text = PlayerOneIcon->Text;
						playerOneOverride = false;
					}
					else 
					{
						goodPlay = false;
						DisplayText->Text = "Invalid action. Please try again Player 1 (" + PlayerOneIcon->Text + ")";
					}
				}
				NextTurnHandler();
				CheckForGameEnd();
				break;

			case 1:
				if (b->Text == "") {
					b->Text = PlayerTwoIcon->Text;
					playerTwoList->Items->Add(Convert::ToInt32(b->Name[b->Name->Length - 2] + "" + b->Name[b->Name->Length - 1]));
				}
				else
				{
					if (allowOverrides && b->Text != PlayerTwoIcon->Text && playerTwoOverride)
					{
						OverrideHandler(playerTwoList, b);
						b->Text = PlayerTwoIcon->Text;
						playerTwoOverride = false;
					}
					else
					{
						goodPlay = false;
						DisplayText->Text = "Invalid action. Please try again Player 2 (" + PlayerTwoIcon->Text + ")";
					}
				}
				NextTurnHandler();
				CheckForGameEnd();
				break;

			case 2:
				if (b->Text == "") {
					b->Text = PlayerThreeIcon->Text;
					playerThreeList->Items->Add(Convert::ToInt32(b->Name[b->Name->Length - 2] + "" + b->Name[b->Name->Length - 1]));
				}
				else
				{
					if (allowOverrides && b->Text != PlayerThreeIcon->Text && playerThreeOverride)
					{
						OverrideHandler(playerThreeList, b);
						b->Text = PlayerThreeIcon->Text;
						playerThreeOverride = false;
					}
					else
					{
						goodPlay = false;
						DisplayText->Text = "Invalid action. Please try again Player 3 (" + PlayerThreeIcon->Text + ")";
					}
				}
				NextTurnHandler();
				CheckForGameEnd();
				break;

			case 3:
				if (b->Text == "") {
					b->Text = PlayerFourIcon->Text;
					playerFourList->Items->Add(Convert::ToInt32(b->Name[b->Name->Length - 2] + "" + b->Name[b->Name->Length - 1]));
				}
				else
				{
					if (allowOverrides && b->Text != PlayerFourIcon->Text && playerFourOverride)
					{
						OverrideHandler(playerFourList, b);
						b->Text = PlayerFourIcon->Text;
						playerFourOverride = false;
					}
					else
					{
						goodPlay = false;
						DisplayText->Text = "Invalid action. Please try again Player 4 (" + PlayerFourIcon->Text + ")";
					}
				}
				NextTurnHandler();
				CheckForGameEnd();
				break;

			default:
				break;
		}
	}

	private: System::Void allowOverrideCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (allowOverrides)
		{
			allowOverrides = false;
		}
		else 
		{
			allowOverrides = true;
		}
	}

	private: System::Void ActionButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		if(play)
		{
			allowOverrideCheckBox->Enabled = false;
			GamePanel->Enabled = true;
			numPlayers = (int)numberOfPlayers->Value;
			numberOfPlayers->Enabled = false;
			play = false;
			ActionButton->Text = "Reset";
			DisplayText->Text = "It is now Player 1s (X) turn!";
		}
		else
		{
			allowOverrideCheckBox->Enabled = true;
			numberOfPlayers->Enabled = true;
			play = true;
			this->turn = 0;
			ActionButton->Text = "Play";
			DisplayText->Text = "Welcome to Tic-Tactical! Press Play to begin . . .";
			
			playerOneOverride   = true;
			playerTwoOverride   = true;
			playerThreeOverride = true;
			playerFourOverride  = true;

			playerOnePoints   = 0;
			playerTwoPoints   = 0;
			playerThreePoints = 0;
			playerFourPoints  = 0;

			for each(Button^ b in GamePanel->Controls)
			{
				b->Text = "";
			}

			playerOneList->Items->Clear();
			playerTwoList->Items->Clear();
			playerThreeList->Items->Clear();
			playerFourList->Items->Clear();

			GamePanel->Enabled = false;
		}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox(nullptr, TEXT("The driver is sleeping!!"), TEXT("Message"), MB_OK);
		if (dev)
		{
			playerOneList->Visible = false;
			playerTwoList->Visible = false;
			playerThreeList->Visible = false;
			playerFourList->Visible = false;
			creator->Visible = false;
			dev = false;
		} 
		else
		{
			playerOneList->Visible = true;
			playerTwoList->Visible = true;
			playerThreeList->Visible = true;
			playerFourList->Visible = true;
			creator->Visible = true;
			dev = true;
		}
	}

	private: System::Void rulesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Welcome to Tic-Tactical! \n\n" +
			"Players (2-4)\n" +
			"Players take turns placing their icon on any open spot on the board.\n\n" +
			"-- Game End --\n" +
			"The game ends when the board is completely full and no spots\n" +
			"are available to be taken. The final score will then be calculated\n" +
			"and the winning Player and their points will be displayed. GG\n\n" +
			"-- Scoring Method- -\n" +
			"3 in a row - 1 point\n" +
			"4 in a row - 2 points\n" +
			"5 in a row - 3 points\n" +
			"6 in a row - 4 points\n\n" +
			"-- Overrides --\n" +
			"A key feature of Tic-Tactical is the Override mechanic. If turned on,\n" +
			"players will be able to overtake another players icon/spot. But, \n" +
			"be smart! Each player only gets 1 override per round! \n\n";

		MessageBox::Show(this, text, "Tic-Tactical Rules", MessageBoxButtons::OK, MessageBoxIcon::None, MessageBoxDefaultButton::Button2);
	}


};
}
