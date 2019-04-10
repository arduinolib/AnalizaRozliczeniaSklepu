object Form12: TForm12
  Left = 287
  Top = 441
  Width = 299
  Height = 156
  Caption = 'Nowy koszt'
  Color = clMoneyGreen
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = [fsBold]
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object Edit1: TEdit
    Left = 8
    Top = 16
    Width = 257
    Height = 24
    TabOrder = 0
  end
  object Button1: TButton
    Left = 32
    Top = 56
    Width = 75
    Height = 41
    Caption = 'Zapisz'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 152
    Top = 56
    Width = 75
    Height = 41
    Caption = 'Wyjd'#378
    TabOrder = 2
    OnClick = Button2Click
  end
end
