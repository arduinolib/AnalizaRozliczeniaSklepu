object Form2: TForm2
  Left = 237
  Top = 177
  BorderIcons = []
  BorderStyle = bsToolWindow
  Caption = 'Warzywa owoce'
  ClientHeight = 504
  ClientWidth = 360
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
    Top = 399
    Width = 360
    Height = 105
    Align = alBottom
    Color = clMoneyGreen
    ParentColor = False
    TabOrder = 0
    object Edit1: TEdit
      Left = 8
      Top = 24
      Width = 161
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
    end
    object Button1: TButton
      Left = 8
      Top = 64
      Width = 75
      Height = 25
      Caption = 'Wybierz'
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 184
      Top = 24
      Width = 75
      Height = 25
      Caption = 'Szukaj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 272
      Top = 24
      Width = 75
      Height = 25
      Caption = 'Sortuj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 96
      Top = 64
      Width = 75
      Height = 25
      Caption = 'Dodaj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 184
      Top = 64
      Width = 75
      Height = 25
      Caption = 'Kasuj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 5
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 272
      Top = 64
      Width = 75
      Height = 25
      Caption = 'Wyjd'#378
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      OnClick = Button6Click
    end
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 0
    Width = 360
    Height = 399
    Align = alClient
    BiDiMode = bdRightToLeft
    ColCount = 3
    Ctl3D = True
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
    ParentColor = True
    ParentCtl3D = False
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 224
    Top = 376
    Width = 121
    Height = 21
    TabOrder = 2
    Text = '0'
    Visible = False
  end
end
