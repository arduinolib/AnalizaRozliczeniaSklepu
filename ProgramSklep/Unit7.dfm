object Form7: TForm7
  Left = 300
  Top = 289
  BorderIcons = []
  BorderStyle = bsToolWindow
  Caption = 'Dopisz utarg'
  ClientHeight = 154
  ClientWidth = 252
  Color = clMoneyGreen
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 81
    Height = 16
    Caption = 'Data utargu'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 88
    Width = 89
    Height = 16
    Caption = 'Kwota utargu'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 48
    Width = 145
    Height = 16
    Caption = 'Czy data poprawna ?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DateTimePicker1: TDateTimePicker
    Left = 136
    Top = 8
    Width = 105
    Height = 24
    CalAlignment = dtaLeft
    Date = 42416.5438499074
    Time = 42416.5438499074
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
  object Edit1: TEdit
    Left = 136
    Top = 88
    Width = 105
    Height = 24
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 8
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Zapisz'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 168
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Wyjd'#378
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 184
    Top = 48
    Width = 59
    Height = 25
    Caption = 'OK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 88
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Popraw'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Button4Click
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 0
    Width = 137
    Height = 57
    BiDiMode = bdRightToLeft
    ColCount = 2
    Ctl3D = True
    RowCount = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goRowSelect]
    ParentBiDiMode = False
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 6
    Visible = False
    RowHeights = (
      24
      24)
  end
  object Edit2: TEdit
    Left = 0
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 7
    Visible = False
  end
end
