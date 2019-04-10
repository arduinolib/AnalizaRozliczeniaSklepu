object Form17: TForm17
  Left = 333
  Top = 269
  Width = 492
  Height = 274
  Caption = 'Dane odbiorcy'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = [fsBold]
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 91
    Height = 13
    Caption = 'Nazwa odbiorcy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 88
    Width = 39
    Height = 13
    Caption = 'Nr NIP'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 128
    Top = 48
    Width = 73
    Height = 13
    Caption = 'Miejscowosc'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 48
    Width = 80
    Height = 13
    Caption = 'Kod pocztowy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 128
    Top = 88
    Width = 33
    Height = 13
    Caption = 'Adres'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 128
    Top = 128
    Width = 140
    Height = 13
    Caption = 'Nazwisko i imi'#281' odbiorcy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 186
    Width = 476
    Height = 50
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
      Left = 48
      Top = 16
      Width = 89
      Height = 25
      Caption = 'Zapisz'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 352
      Top = 16
      Width = 89
      Height = 25
      Caption = 'Wyjd'#378
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object Edit1: TEdit
    Left = 8
    Top = 24
    Width = 457
    Height = 24
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 8
    Top = 64
    Width = 113
    Height = 24
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 128
    Top = 64
    Width = 337
    Height = 24
    TabOrder = 3
  end
  object Edit4: TEdit
    Left = 8
    Top = 104
    Width = 113
    Height = 24
    TabOrder = 4
  end
  object Edit5: TEdit
    Left = 128
    Top = 104
    Width = 337
    Height = 24
    TabOrder = 5
  end
  object Edit6: TEdit
    Left = 128
    Top = 144
    Width = 337
    Height = 24
    TabOrder = 6
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 136
    Width = 65
    Height = 41
    ColCount = 6
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goRowSelect]
    TabOrder = 7
    Visible = False
  end
end
