object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Button1: TButton
    Left = 280
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
  end
  object DBGrid1: TDBGrid
    Left = -9
    Top = 102
    Width = 641
    Height = 99
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'event_id'
        ImeName = 'US'
        Title.Caption = 'ID'
        Width = 20
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'event_name'
        Title.Caption = 'Name'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'event_state'
        Title.Caption = 'Estado'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'event_start_date'
        Title.Caption = 'Fecha de Inicio'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'event_end_date'
        Title.Caption = 'Fecha de Culminaci'#243'n'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 250
    Top = 423
    Width = 200
    Height = 18
    TabOrder = 2
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Database='
      'User_Name='
      'Password='
      'ODBCDriver={PostgreSQL ODBC Driver(UNICODE)}'
      'DataSource=PostgreSQL35W'
      'DriverID=ODBC')
    Connected = True
    Left = 556
    Top = 373
  end
  object DataSource2: TDataSource
    Left = 516
    Top = 397
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECt * FROM events;')
    Left = 584
    Top = 413
  end
end
