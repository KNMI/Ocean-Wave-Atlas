object Form1: TForm1
  Left = 248
  Top = 199
  Width = 686
  Height = 471
  VertScrollBar.Tracking = True
  Caption = 'Ocean Wave Atlas'
  Color = clWhite
  DefaultMonitor = dmMainForm
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000080020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF009999
    9999999999999999999999999999966666666666666666666666666666699666
    68868886666666666662F6666669966336666666666666666666666668699666
    666666666666E006666666266F6996666666E0600EF0000E6666666666699666
    666600EFE000000E66666666666996666600F0F000000006F666666666699666
    6000000000000006666666666669966600000000000000046666666666699668
    0000000008800004666666666669966000000000000000006666666666699EE0
    00000000000000004EEEEEEEEEE99EE00088F8F0FF00000008EEEEEEEEE99EE8
    000000000000000000EEEEEEEEE99EEEE0FFFFF8EEEEF844008EEEEFFFE99EFE
    E0888838EEEEEEEE800EEEEEFEE99EEEE0011188EEEEEEEEEEEEEEEEEEE99EFE
    EEE999EEEEEEEEEEEEEEEEEEEEE99EEEEEE0FFEEEEEEEEEEFFFFFFFFEFE99EEE
    EEE088EEFFFFFEFFFFFFFFFFFFF99EEEEEEE8EEEEFFFFEEEFFFEFFFFEFF99EEE
    EEEF8EEEEEEEFEFEFFFFFFFEFFF99FFFFFF8FEEEEEEFEEEFEFFFFFEFEFE99FE8
    E88FEEEEEEEEEEEEFFFFFFEEFEE99FFEFEFFEEEEEEEEEEEFFFFFFFEEEEE99FFF
    FFEEEEEEEEEEEFFFFFFFEEEEEEE99EFEEEEEEEEEEEEEFFEEFFFEEEEEEEE99EEE
    EEEEEEEEEEEEEFFFFFFEEEEEEEE99EEFEFFEEEEEEEEEEEEEFFFEEEEEEEE99EFF
    FEEEEEEEEEEEEEEEEFEEEEEEEEE9999999999999999999999999999999990000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000}
  Menu = MainMenu
  OldCreateOrder = False
  PopupMenu = PopupMenu1
  WindowState = wsMaximized
  OnDestroy = FormDestroy
  OnKeyDown = OnKeyDownForm1
  OnMouseWheel = FormMouseWheel
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = -4
    Top = -8
    Width = 800
    Height = 1000
    AutoSize = True
    Center = True
    IncrementalDisplay = True
    OnMouseMove = OnMouseMoveImage
  end
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 796
    Height = 2
    Align = alTop
  end
  object MainMenu: TMainMenu
    Left = 16
    Top = 56
    object FileMenu: TMenuItem
      Caption = '&File'
      object Print1: TMenuItem
        Caption = 'Print...'
        OnClick = Print_Chart
      end
      object FileExit: TMenuItem
        Caption = '&Exit'
        OnClick = Quit_Program
      end
    end
    object ClimatologyMenu: TMenuItem
      Caption = '&Climatology'
      object ClimatologyGlobal: TMenuItem
        Caption = '&Global'
        object GlobalJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologyGlobalJanuary
        end
        object GlobalFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologyGlobalFebruary
        end
        object GlobalMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologyGlobalMarch
        end
        object GlobalApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologyGlobalApril
        end
        object GlobalMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologyGlobalMay
        end
        object GlobalJune: TMenuItem
          Caption = '&June'
          OnClick = ClimatologyGlobalJune
        end
        object GlobalJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologyGlobalJuly
        end
        object GlobalAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologyGlobalAugust
        end
        object GlobalSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologyGlobalSeptember
        end
        object GlobalOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologyGlobalOctober
        end
        object GlobalNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologyGlobalNovember
        end
        object GlobalDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologyGlobalDecember
        end
        object N1: TMenuItem
          Caption = '-'
        end
        object GloballAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologyGlobalAllMonths
        end
        object N15: TMenuItem
          Caption = '-'
        end
        object GlobalYearly: TMenuItem
          Caption = 'Yea&rly'
          OnClick = ClimatologyGlobalYearly
        end
        object Global100YearReturnValue1: TMenuItem
          Caption = '100 year return &value'
          OnClick = ClimatologyGlobalReturnValue
        end
        object GlobalExceedences: TMenuItem
          Caption = 'Ex&ceedences 3m/6m/9m'
          OnClick = ClimatologyGlobalExceedences
        end
      end
      object ClimatologyNorthAtlantic: TMenuItem
        Caption = '&North Atlantic'
        object NorthAtlanticJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologyNorthAtlanticJanuary
        end
        object NorthAtlanticFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologyNorthAtlanticFebruary
        end
        object NorthAtlanticMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologyNorthAtlanticMarch
        end
        object NorthAtlanticApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologyNorthAtlanticApril
        end
        object NorthAtlanticMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologyNorthAtlanticMay
        end
        object NorthAtlanticJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologyNorthAtlanticJune
        end
        object NorthAtlanticJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologyNorthAtlanticJuly
        end
        object NorthAtlanticAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologyNorthAtlanticAugust
        end
        object NorthAtlanticSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologyNorthAtlanticSeptember
        end
        object NorthAtlanticOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologyNorthAtlanticOctober
        end
        object NorthAtlanticNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologyNorthAtlanticNovember
        end
        object NorthAtlanticDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologyNorthAtlanticDecember
        end
        object N2: TMenuItem
          Caption = '-'
        end
        object NorthAtlanticAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologyNorthAtlanticAllMonths
        end
      end
      object ClimatologySouthAtlantic: TMenuItem
        Caption = '&South Atlantic'
        object SouthAtlanticJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologySouthAtlanticJanuary
        end
        object SouthAtlanticFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologySouthAtlanticFebruary
        end
        object SouthAtlanticMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologySouthAtlanticMarch
        end
        object SouthAtlanticApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologySouthAtlanticApril
        end
        object SouthAtlanticMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologySouthAtlanticMay
        end
        object SouthAtlanticJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologySouthAtlanticJune
        end
        object SouthAtlanticJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologySouthAtlanticJuly
        end
        object SouthAtlanticAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologySouthAtlanticAugust
        end
        object SouthAtlanticSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologySouthAtlanticSeptember
        end
        object SouthAtlanticOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologySouthAtlanticOctober
        end
        object SouthAtlanticNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologySouthAtlanticNovember
        end
        object SouthAtlanticDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologySouthAtlanticDecember
        end
        object N3: TMenuItem
          Caption = '-'
        end
        object SouthAtlanticAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologySouthAtlanticAllMonths
        end
      end
      object ClimatologyNorthPacific: TMenuItem
        Caption = 'N&orth Pacific'
        object NorthPacificJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologyNorthPacificJanuary
        end
        object NorthPacificFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologyNorthPacificFebruary
        end
        object NorthPacificMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologyNorthPacificMarch
        end
        object NorthPacificApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologyNorthPacificApril
        end
        object NorthPacificMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologyNorthPacificMay
        end
        object NorthPacifcJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologyNorthPacificJune
        end
        object NorthPacificJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologyNorthPacificJuly
        end
        object NorthPacificAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologyNorthPacificAugust
        end
        object NorthPacificSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologyNorthPacificSeptember
        end
        object NorthPacificOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologyNorthPacificOctober
        end
        object NorthPacificNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologyNorthPacificNovember
        end
        object NorthPacificDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologyNorthPacificDecember
        end
        object N4: TMenuItem
          Caption = '-'
        end
        object NorthPacificAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologyNorthPacificAllMonths
        end
      end
      object ClimatologySouthPacific: TMenuItem
        Caption = 'So&uth Pacific'
        object SouthPacificJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologySouthPacificJanuary
        end
        object SouthPacificFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologySouthPacificFebruary
        end
        object SouthPacificMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologySouthPacificMarch
        end
        object SouthPacificApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologySouthPacificApril
        end
        object SouthPacificMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologySouthPacificMay
        end
        object SouthPacificJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologySouthPacificJune
        end
        object SouthPacificJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologySouthPacificJuly
        end
        object SouthPacificAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologySouthPacificAugust
        end
        object SouthPacificSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologySouthPacificSeptember
        end
        object SouthPacificOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologySouthPacificOctober
        end
        object SouthPacificNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologySouthPacificNovember
        end
        object SouthPacificDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologySouthPacificDecember
        end
        object N5: TMenuItem
          Caption = '-'
        end
        object SouthPacificAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologySouthPacificAllMonths
        end
      end
      object ClimatologyIndianOcean: TMenuItem
        Caption = '&Indian Ocean'
        object IndianJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologyIndianOceanJanuary
        end
        object IndianFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologyIndianOceanFebruary
        end
        object IndianMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologyIndianOceanMarch
        end
        object IndianApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologyIndianOceanApril
        end
        object IndianMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologyIndianOceanMay
        end
        object IndianJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologyIndianOceanJune
        end
        object IndianJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologyIndianOceanJuly
        end
        object IndianAugust: TMenuItem
          Caption = '&Au&gust'
          OnClick = ClimatologyIndianOceanAugust
        end
        object IndianSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologyIndianOceanSeptember
        end
        object IndianOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologyIndianOceanOctober
        end
        object IndianNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologyIndianOceanNovember
        end
        object IndianDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologyIndianOceanDecember
        end
        object N6: TMenuItem
          Caption = '-'
        end
        object IndianAllMonths: TMenuItem
          Caption = 'A&ll Months'
          OnClick = ClimatologyIndianOceanAllMonths
        end
      end
      object ClimatologyAntarcticOcean: TMenuItem
        Caption = '&Antarctic Ocean'
        object AntarcticJanuary: TMenuItem
          Caption = '&January'
          OnClick = ClimatologyAntarcticOceanJanuary
        end
        object AntarcticFebruary: TMenuItem
          Caption = '&February'
          OnClick = ClimatologyAntarcticOceanFebruary
        end
        object AntarcticMarch: TMenuItem
          Caption = '&March'
          OnClick = ClimatologyAntarcticOceanMarch
        end
        object AntarcticApril: TMenuItem
          Caption = '&April'
          OnClick = ClimatologyAntarcticOceanApril
        end
        object AntarcticMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = ClimatologyAntarcticOceanMay
        end
        object AntarcticJune: TMenuItem
          Caption = 'Jun&e'
          OnClick = ClimatologyAntarcticOceanJune
        end
        object AntarcticJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = ClimatologyAntarcticOceanJuly
        end
        object AntarcticAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = ClimatologyAntarcticOceanAugust
        end
        object AntarcticSeptember: TMenuItem
          Caption = '&September'
          OnClick = ClimatologyAntarcticOceanSeptember
        end
        object AntarcticOctober: TMenuItem
          Caption = '&October'
          OnClick = ClimatologyAntarcticOceanOctober
        end
        object AntarcticNovember: TMenuItem
          Caption = '&November'
          OnClick = ClimatologyAntarcticOceanNovember
        end
        object AntarcticDecember: TMenuItem
          Caption = '&December'
          OnClick = ClimatologyAntarcticOceanDecember
        end
        object N7: TMenuItem
          Caption = '-'
        end
        object AntarcticAllmonths: TMenuItem
          Caption = 'A&ll months'
          OnClick = ClimatologyAntarcticOceanAllMonths
        end
      end
    end
    object Maintenance1: TMenuItem
      Caption = '&Maintenance'
      object Forecastsettings1: TMenuItem
        Caption = '&Internet settings...'
        OnClick = Forecastsettings1Click
      end
    end
    object Internet1: TMenuItem
      Caption = '&Internet'
      object Global1: TMenuItem
        Caption = '&Global'
        OnClick = Global1Click
      end
      object NorthAtlantic1: TMenuItem
        Caption = '&North Atlantic'
        OnClick = NorthAtlantic1Click
      end
      object SouthAtlantic1: TMenuItem
        Caption = '&South Atlantic'
        OnClick = SouthAtlantic1Click
      end
      object IndianOcean1: TMenuItem
        Caption = 'Indian Ocean'
        OnClick = IndianOcean1Click
      end
      object NorthPacific1: TMenuItem
        Caption = 'North &Pacific'
        OnClick = NorthPacific1Click
      end
      object SouthPacific1: TMenuItem
        Caption = 'South P&acific'
        OnClick = SouthPacific1Click
      end
      object NorthSea1: TMenuItem
        Caption = 'N&orth Sea'
        OnClick = NorthSea1Click
      end
    end
    object InfoMenu: TMenuItem
      Caption = '&Info'
      object InfoClimatology: TMenuItem
        Caption = 'ERA-40 Wave &Climatology'
        OnClick = InfoClimatologyClick
      end
      object InfoQualityStatement: TMenuItem
        Caption = 'ERA-40 &Quality Statement'
        OnClick = InfoQualityStatementClick
      end
      object InfoAbout: TMenuItem
        Caption = '&About...'
        OnClick = InfoAboutClick
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 60
    Top = 56
    object PopupGlobal: TMenuItem
      Caption = '&Global'
      object PopupGlobalJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologyGlobalJanuary
      end
      object PopupGlobalFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologyGlobalFebruary
      end
      object PopupGlobalMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologyGlobalMarch
      end
      object PopupGlobalApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologyGlobalApril
      end
      object PopupGlobalMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologyGlobalMay
      end
      object PopupGlobalJune: TMenuItem
        Caption = '&June'
        OnClick = ClimatologyGlobalJune
      end
      object PopupGlobalJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologyGlobalJuly
      end
      object PopupGlobalAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologyGlobalAugust
      end
      object PopupGlobalSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologyGlobalSeptember
      end
      object PopupGlobalOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologyGlobalOctober
      end
      object PopupGlobalNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologyGlobalNovember
      end
      object PopupGlobalDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologyGlobalDecember
      end
      object N8: TMenuItem
        Caption = '-'
      end
      object PopupGlobalAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologyGlobalAllMonths
      end
      object N16: TMenuItem
        Caption = '-'
      end
      object PopupYearly: TMenuItem
        Caption = 'Year&ly'
        OnClick = ClimatologyGlobalYearly
      end
      object Popupreturnvalue: TMenuItem
        Caption = '100 year return &value'
        OnClick = ClimatologyGlobalReturnValue
      end
      object PopupExceedences: TMenuItem
        Caption = 'Ex&ceedences 3m/6m/9m'
        OnClick = ClimatologyGlobalExceedences
      end
    end
    object PopupNorthAtlantic: TMenuItem
      Caption = '&North Atlantic'
      object PopupNorthAtlanticJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologyNorthAtlanticJanuary
      end
      object PopupNorthAtlanticFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologyNorthAtlanticFebruary
      end
      object PopupNorthAtlanticMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologyNorthAtlanticMarch
      end
      object PopupNorthAtlanticApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologyNorthAtlanticApril
      end
      object PopupNorthAtlanticMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologyNorthAtlanticMay
      end
      object PopupNorthAtlanticJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologyNorthAtlanticJune
      end
      object PopupNorthAtlanticJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologySouthAtlanticJuly
      end
      object PopupNorthAtlanticAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologyNorthAtlanticAugust
      end
      object PopupNorthAtlanticSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologyNorthAtlanticSeptember
      end
      object PopupNorthAtlanticOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologyNorthAtlanticOctober
      end
      object PopupNorthAtlanticNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologyNorthAtlanticNovember
      end
      object PopupNorthAtlanticDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologyNorthAtlanticDecember
      end
      object N9: TMenuItem
        Caption = '-'
      end
      object PopupNorthAtlanticAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologyNorthAtlanticAllMonths
      end
    end
    object PopupSouthAtlantic: TMenuItem
      Caption = '&South Atlantic'
      object PopupSouthAtlanticJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologySouthAtlanticJanuary
      end
      object PopupSouthAtlanticFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologySouthAtlanticFebruary
      end
      object PopupSouthAtlanticMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologySouthAtlanticMarch
      end
      object PopupSouthAtlanticApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologySouthAtlanticApril
      end
      object PopupSouthAtlanticMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologySouthAtlanticMay
      end
      object PopupSouthAtlanticJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologySouthAtlanticJune
      end
      object PopupSouthAtlanticJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologySouthAtlanticJuly
      end
      object PopupSouthAtlanticAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologySouthAtlanticAugust
      end
      object PopupSouthAtlanticSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologySouthAtlanticSeptember
      end
      object PopupSouthAtlanticOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologySouthAtlanticOctober
      end
      object PopupSouthAtlanticNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologySouthAtlanticNovember
      end
      object PopupSouthAtlanticDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologySouthAtlanticDecember
      end
      object N10: TMenuItem
        Caption = '-'
      end
      object PopupSouthAtlanticAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologySouthAtlanticAllMonths
      end
    end
    object PopupNorthPacific: TMenuItem
      Caption = 'N&orth Pacific'
      object PopupNorthPacificJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologyNorthPacificJanuary
      end
      object PopupNorthPacificFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologyNorthPacificFebruary
      end
      object PopupNorthPacificMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologyNorthPacificMarch
      end
      object PopupNorthPacificApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologyNorthPacificApril
      end
      object PopupNorthPacificMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologyNorthPacificMay
      end
      object PopupNorthPacificJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologyNorthPacificJune
      end
      object PopupNorthPacificJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologyNorthPacificJuly
      end
      object PopupNorthPacificAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologyNorthPacificAugust
      end
      object PopupNorthPacificSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologyNorthPacificSeptember
      end
      object PopupNorthPacificOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologyNorthPacificOctober
      end
      object PopupNorthPacificNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologyNorthPacificNovember
      end
      object PopupNorthPacificDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologyNorthPacificDecember
      end
      object N11: TMenuItem
        Caption = '-'
      end
      object PopupNorthPacificAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologyNorthPacificAllMonths
      end
    end
    object PopupSouthPacific: TMenuItem
      Caption = 'So&uth Pacific'
      object PopupSouthPacificJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologySouthPacificJanuary
      end
      object PopupSouthPacificFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologySouthPacificFebruary
      end
      object PopupSouthPacificMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologySouthPacificMarch
      end
      object PopupSouthPacificApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologySouthPacificApril
      end
      object PopupSouthPacificMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologySouthPacificMay
      end
      object PopupSouthPacificJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologySouthPacificJune
      end
      object PopupSouthPacificJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologySouthPacificJuly
      end
      object PopupSouthPacificAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologySouthPacificAugust
      end
      object PopupSouthPacificSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologySouthPacificSeptember
      end
      object PopupSouthPacificOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologySouthPacificOctober
      end
      object PopupSouthPacificNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologySouthPacificNovember
      end
      object PopupSouthPacificDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologySouthPacificDecember
      end
      object N12: TMenuItem
        Caption = '-'
      end
      object PopupSouthPacificAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologySouthPacificAllMonths
      end
    end
    object PopupIndianOcean: TMenuItem
      Caption = '&Indian Ocean'
      object PopupIndianOceanJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologyIndianOceanJanuary
      end
      object PopupIndianOceanFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologyIndianOceanFebruary
      end
      object PopupIndianOceanMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologyIndianOceanMarch
      end
      object PopupIndianOceanApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologyIndianOceanApril
      end
      object PopupIndianOceanMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologyIndianOceanMay
      end
      object PopupIndianOceanJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologyIndianOceanJune
      end
      object PopupIndianOceanJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologyIndianOceanJuly
      end
      object PopupIndianOceanAugust: TMenuItem
        Caption = '&Au&gust'
        OnClick = ClimatologyIndianOceanAugust
      end
      object PopupIndianOceanSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologyIndianOceanSeptember
      end
      object PopupIndianOceanOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologyIndianOceanOctober
      end
      object PopupIndianOceanNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologyIndianOceanNovember
      end
      object PopupIndianOceanDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologyIndianOceanDecember
      end
      object N13: TMenuItem
        Caption = '-'
      end
      object PopupIndianOceanAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologyIndianOceanAllMonths
      end
    end
    object PopupAntarcticOcean: TMenuItem
      Caption = '&Antarctic Ocean'
      object PopupAntarcticOceanJanuary: TMenuItem
        Caption = '&January'
        OnClick = ClimatologyAntarcticOceanJanuary
      end
      object PopupAntarcticOceanFebruary: TMenuItem
        Caption = '&February'
        OnClick = ClimatologyAntarcticOceanFebruary
      end
      object PopupAntarcticOceanMarch: TMenuItem
        Caption = '&March'
        OnClick = ClimatologyAntarcticOceanMarch
      end
      object PopupAntarcticOceanApril: TMenuItem
        Caption = '&April'
        OnClick = ClimatologyAntarcticOceanApril
      end
      object PopupAntarcticOceanMay: TMenuItem
        Caption = 'Ma&y'
        OnClick = ClimatologyAntarcticOceanMay
      end
      object PopupAntarcticOceanJune: TMenuItem
        Caption = 'Jun&e'
        OnClick = ClimatologyAntarcticOceanJune
      end
      object PopupAntarcticOceanJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = ClimatologyAntarcticOceanJuly
      end
      object PopupAntarcticOceanAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = ClimatologyAntarcticOceanAugust
      end
      object PopupAntarcticOceanSeptember: TMenuItem
        Caption = '&September'
        OnClick = ClimatologyAntarcticOceanSeptember
      end
      object popupAntarcticOceanOctober: TMenuItem
        Caption = '&October'
        OnClick = ClimatologyAntarcticOceanOctober
      end
      object PopupAntarcticOceanNovember: TMenuItem
        Caption = '&November'
        OnClick = ClimatologyAntarcticOceanNovember
      end
      object PopupAntarcticOceanDecember: TMenuItem
        Caption = '&December'
        OnClick = ClimatologyAntarcticOceanDecember
      end
      object N14: TMenuItem
        Caption = '-'
      end
      object PopupAntarcticOceanAllMonths: TMenuItem
        Caption = 'A&ll Months'
        OnClick = ClimatologyAntarcticOceanAllMonths
      end
    end
  end
  object PrintDialog1: TPrintDialog
    Left = 104
    Top = 56
  end
end
