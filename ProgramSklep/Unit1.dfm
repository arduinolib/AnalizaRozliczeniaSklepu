object Form1: TForm1
  Left = 89
  Top = 3
  BiDiMode = bdRightToLeft
  BorderIcons = []
  BorderStyle = bsToolWindow
  Caption = 'Ma'#322'y sklep'
  ClientHeight = 667
  ClientWidth = 1125
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  ParentBiDiMode = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 1125
    Height = 49
    Align = alTop
    Color = clMoneyGreen
    ParentColor = False
    TabOrder = 0
    object Label4: TLabel
      Left = 24
      Top = 16
      Width = 87
      Height = 16
      Caption = 'Data zakupu'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object DateTimePicker1: TDateTimePicker
      Left = 136
      Top = 16
      Width = 113
      Height = 24
      CalAlignment = dtaLeft
      Date = 42415.4252474421
      Time = 42415.4252474421
      DateFormat = dfShort
      DateMode = dmComboBox
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 0
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 597
    Width = 1125
    Height = 70
    Align = alBottom
    Color = clMoneyGreen
    ParentColor = False
    TabOrder = 1
    object Label1: TLabel
      Left = 544
      Top = 40
      Width = 119
      Height = 16
      Caption = 'Wartosc   zakupu'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 680
      Top = 40
      Width = 133
      Height = 16
      Caption = 'Wartosc sprzedazy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 888
      Top = 40
      Width = 34
      Height = 16
      Caption = 'Zysk'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 1032
      Top = 40
      Width = 51
      Height = 16
      Caption = 'Zysk %'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Button2: TButton
      Left = 400
      Top = 24
      Width = 121
      Height = 25
      Caption = 'Usun pozycje'
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 288
      Top = 24
      Width = 105
      Height = 25
      Caption = 'Popraw'
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = Button3Click
    end
    object Edit1: TEdit
      Left = 544
      Top = 8
      Width = 121
      Height = 24
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
    end
    object Edit2: TEdit
      Left = 688
      Top = 8
      Width = 121
      Height = 24
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 840
      Top = 8
      Width = 121
      Height = 24
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
    end
    object ComboBox1: TComboBox
      Left = 16
      Top = 24
      Width = 145
      Height = 24
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ItemHeight = 16
      ParentFont = False
      TabOrder = 5
    end
    object Button1: TButton
      Left = 184
      Top = 24
      Width = 89
      Height = 25
      Caption = 'OK'
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      OnClick = Button1Click
    end
    object Edit4: TEdit
      Left = 992
      Top = 8
      Width = 121
      Height = 24
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
    end
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 49
    Width = 1125
    Height = 548
    Align = alClient
    Color = clBtnFace
    ColCount = 10
    Ctl3D = False
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goRowSelect]
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 2
  end
  object Edit5: TEdit
    Left = 968
    Top = 176
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '- dopisz towar'
    Visible = False
  end
  object MainMenu1: TMainMenu
    Left = 1080
    Top = 72
    object Zakuptowaru1: TMenuItem
      Caption = 'Zakup towaru'
      object Dodaj1: TMenuItem
        Caption = 'Nowy zakup'
        OnClick = Dodaj1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapisz zakup'
        OnClick = Zapisz1Click
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Sprzesa1: TMenuItem
      Caption = 'Sprzesa'#380
      object Utarg2: TMenuItem
        Caption = 'Utarg'
        OnClick = Utarg2Click
      end
      object Faktura1: TMenuItem
        Caption = 'Faktura'
        OnClick = Faktura1Click
      end
    end
    object Utarg1: TMenuItem
      Caption = 'Zestawienia'
      object Zaku1: TMenuItem
        Caption = 'Zestawienie zakup'#243'w i obrot'#243'w'
        OnClick = Zaku1Click
      end
      object Najbardziejopacalnytowar1: TMenuItem
        Caption = 'Najbardziej op'#322'acalny towar'
        OnClick = Najbardziejopacalnytowar1Click
      end
      object Zestawieniezakupw1: TMenuItem
        Caption = 'Zestawienie zakup'#243'w'
        OnClick = Zestawieniezakupw1Click
      end
      object Pokawybranytowar1: TMenuItem
        Caption = 'Poka'#380' wybrany towar'
        OnClick = Pokawybranytowar1Click
      end
      object Bilanswokresie1: TMenuItem
        Caption = 'Bilans w okresie'
        OnClick = Bilanswokresie1Click
      end
    end
    object Towary1: TMenuItem
      Caption = 'Towary'
      object Grupatowarowa1: TMenuItem
        Caption = 'Grupa towarowa'
        object Warzywaowoce1: TMenuItem
          Caption = 'Warzywa owoce'
          OnClick = Warzywaowoce1Click
        end
        object Artspozywcze1: TMenuItem
          Caption = 'Art. spozywcze'
          OnClick = Artspozywcze1Click
        end
      end
    end
    object Koszty1: TMenuItem
      Caption = 'Koszty'
      OnClick = Koszty1Click
    end
  end
end
