object Form10: TForm10
  Left = 192
  Top = 124
  Width = 358
  Height = 563
  Caption = 'Lista koszt'#243'w'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 432
    Width = 342
    Height = 93
    Align = alBottom
    Color = clMoneyGreen
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
    TabOrder = 0
    object Button1: TButton
      Left = 8
      Top = 24
      Width = 75
      Height = 57
      Caption = 'Wybierz'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 88
      Top = 24
      Width = 75
      Height = 57
      Caption = 'Dodaj'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 168
      Top = 24
      Width = 75
      Height = 57
      Caption = 'Kasuj'
      TabOrder = 2
    end
    object Button4: TButton
      Left = 256
      Top = 24
      Width = 75
      Height = 57
      Caption = 'Wyjd'#378
      TabOrder = 3
      OnClick = Button4Click
    end
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 0
    Width = 342
    Height = 432
    Align = alClient
    BiDiMode = bdRightToLeft
    Color = clBtnFace
    ColCount = 1
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
    ParentBiDiMode = False
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 1
  end
end
