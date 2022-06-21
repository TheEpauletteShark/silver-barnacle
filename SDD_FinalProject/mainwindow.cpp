#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QWidget>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QWebEnginePage>
#include <QWebEngineSettings>

#include <QDesktopServices>

#include <QProcess>

#include <QNetworkInformation>

#include <QGeoCoordinate>

#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QPrinterInfo>
#include <QPrintDialog>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // sets index to zero for home page on startup
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_identify_pressed()
{
    ui->stackedWidget->setCurrentIndex(1); // zero-based index, so if page_x, x = index + 1
}


void MainWindow::on_back_pressed()
{
    ui->stackedWidget->setCurrentIndex(0); // order to home page (back button)
    ui->easternlongneck->close();
    ui->macquarie->close();
    ui->sawshell->close();
    ui->northernsnapping->close();
    ui->saltview->close();
    ui->freshview->close();
}


void MainWindow::on_crocodile_pressed()
{
    ui->stackedWidget->setCurrentIndex(2); //crocodile page
    ui->saltview->show();
    ui->saltview->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/Saltwater_crocodile.jpg/320px-Saltwater_crocodile.jpg"));
    ui->freshview->show();
    ui->freshview->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/5/5b/Freshwater_crocodile.jpg/320px-Freshwater_crocodile.jpg"));
}

void MainWindow::on_pushButton_pressed()
{
    ui->stackedWidget->setCurrentIndex(1); // orders page
}


void MainWindow::on_pushButton_2_pressed()
{
    ui->stackedWidget->setCurrentIndex(4); // small snake colour
}


void MainWindow::on_snake_pressed()
{
    ui->stackedWidget->setCurrentIndex(3); // snake size
}


void MainWindow::on_pushButton_5_pressed()
{
    ui->stackedWidget->setCurrentIndex(8); // small grey/black snake
    ui->slateygrey->show();
    ui->slateygrey->load(QUrl("https://n.b5z.net/i/u/10092244/i/sg550.jpg"));
    ui->commontree->show();
    ui->commontree->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/8f/CommonTreeSnake.JPG/320px-CommonTreeSnake.JPG"));
    ui->whitelipped->show();
    ui->whitelipped->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/0/0d/CSIRO_ScienceImage_7486_Whitelipped_Snake.jpg/320px-CSIRO_ScienceImage_7486_Whitelipped_Snake.jpg"));
    ui->paleheaded->show();
    ui->paleheaded->load(QUrl("https://media.australian.museum/media/dd/images/Some_image.width-1200.4020602.jpg"));
    ui->keelback->show();
    ui->keelback->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/f/fb/Keelback_Tropidonophis_mairii_7th_Brigade_Park_Chermside_P1050904.jpg/240px-Keelback_Tropidonophis_mairii_7th_Brigade_Park_Chermside_P1050904.jpg"));
}


void MainWindow::on_pushButton_6_pressed()
{
    ui->stackedWidget->setCurrentIndex(9); // small brown/red snake
    ui->goldencrowned->show();
    ui->goldencrowned->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/0/08/Golden_Crowned_Snake.jpg/320px-Golden_Crowned_Snake.jpg"));
    ui->babybrown->show();
    ui->babybrown->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/2/2c/Eastern_Brown_Snake_-_Resolute_Beach_Pittwater_NSW.jpg"));
    ui->pygmy->show();
    ui->pygmy->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Antaresia_perthensis.jpg/320px-Antaresia_perthensis.jpg"));
    ui->browntree->show();
    ui->browntree->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Brown_tree_snake_%28Boiga_irregularis%29_%288387575202%29.jpg/241px-Brown_tree_snake_%28Boiga_irregularis%29_%288387575202%29.jpg"));
}


void MainWindow::on_pushButton_7_pressed()
{
    ui->stackedWidget->setCurrentIndex(10); // small green/blue snake
    ui->commonblue->show();
    ui->commonblue->load(QUrl("https://live.staticflickr.com/4779/26831079688_94698867b3_b.jpg"));
    ui->seakrait->show();
    ui->seakrait->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/a/a7/Banded_Sea_Krait_%28Laticauda_colubrina%29_%2814454930177%29.jpg/320px-Banded_Sea_Krait_%28Laticauda_colubrina%29_%2814454930177%29.jpg"));
}


void MainWindow::on_pushButton_8_pressed()
{
    ui->stackedWidget->setCurrentIndex(4); // small black snake to small snake colour
}


void MainWindow::on_pushButton_9_pressed()
{
    ui->stackedWidget->setCurrentIndex(4); // small brown snake to small snake colour
}


void MainWindow::on_pushButton_10_pressed()
{
    ui->stackedWidget->setCurrentIndex(4); // small green/blue to small snake colour
}


void MainWindow::on_pushButton_3_pressed()
{
    ui->stackedWidget->setCurrentIndex(14); // medium snake to medium snake colour
}


void MainWindow::on_pushButton_12_pressed()
{
    ui->stackedWidget->setCurrentIndex(12); // medium snake colour to medium grey/black
    ui->redbellied->show();
    ui->redbellied->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Red-bellied_Black_Snake%2C_Awabakal.jpg/320px-Red-bellied_Black_Snake%2C_Awabakal.jpg"));
    ui->bluebellied->show();
    ui->bluebellied->load(QUrl("https://media.australian.museum/media/dd/images/Some_image.width-1200.b025077.jpg"));
    ui->tiger->show();
    ui->tiger->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/5/5b/20060306_King_Island_Tiger_Snake.jpg/320px-20060306_King_Island_Tiger_Snake.jpg"));
    ui->copperhead->show();
    ui->copperhead->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/0/04/Highlands_Copperhead_%2821677870211%29.jpg/320px-Highlands_Copperhead_%2821677870211%29.jpg"));
}


void MainWindow::on_pushButton_13_pressed()
{
    ui->stackedWidget->setCurrentIndex(11); // medium snake colour to medium green/blue
    ui->greentree->show();
    ui->greentree->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/a/a3/Green_Tree_Python.jpg/318px-Green_Tree_Python.jpg"));
    ui->junglecarpet->show();
    ui->junglecarpet->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/1/14/Juncarpet1.jpg/320px-Juncarpet1.jpg"));
}


void MainWindow::on_pushButton_11_pressed()
{
    ui->stackedWidget->setCurrentIndex(13); // medium snake colour to medium brown/red
    ui->gwardar->show();
    ui->gwardar->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Western_Brown_snake.jpg/320px-Western_Brown_snake.jpg"));
    ui->inland->show();
    ui->inland->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Fierce_Snake-Oxyuranus_microlepidotus.jpg/320px-Fierce_Snake-Oxyuranus_microlepidotus.jpg"));
    ui->easternbrown->show();
    ui->easternbrown->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/85/Eastern_brown_snake.jpg/320px-Eastern_brown_snake.jpg"));
    ui->roughscaled->show();
    ui->roughscaled->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/5/51/Tropcarin3.jpg"));
    ui->dugite->show();
    ui->dugite->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/3/3d/Dugite_%28Pseudonaja_affinis%29.png/320px-Dugite_%28Pseudonaja_affinis%29.png"));
}


void MainWindow::on_pushButton_4_pressed()
{
    ui->stackedWidget->setCurrentIndex(15); // snake size to large colour
}


void MainWindow::on_pushButton_22_pressed()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pushButton_17_pressed()
{
    ui->stackedWidget->setCurrentIndex(17); // large snake colour to large grey/black
    ui->murraydarling->show();
    ui->murraydarling->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/5/5e/Murray_darling_carpet_python%2C_head_and_pattern.jpg/320px-Murray_darling_carpet_python%2C_head_and_pattern.jpg"));
    ui->olivepython->show();
    ui->olivepython->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/4/43/Liasis_olivaceous_%28Gracie%29.jpg/450px-Liasis_olivaceous_%28Gracie%29.jpg"));
    ui->oenpelli->show();
    ui->oenpelli->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/86/The_Australian_zoologist_%281973%29_%2820162909300%29.jpg/320px-The_Australian_zoologist_%281973%29_%2820162909300%29.jpg"));
    ui->blackheaded->show();
    ui->blackheaded->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/b/bf/Blackheaded_python.jpg"));
    ui->coastalcarpet->show();
    ui->coastalcarpet->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/1/1f/Australian_carpet_python_03.jpg/273px-Australian_carpet_python_03.jpg"));
}


void MainWindow::on_pushButton_18_pressed()
{
    ui->stackedWidget->setCurrentIndex(18); // large snake colour to large brown/red
    ui->bredli->show();
    ui->bredli->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/c/c2/Morelia_bredli.jpg"));
    ui->woma->show();
    ui->woma->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/8/83/Aspidites_ramsayi_%281%29.jpg"));
    ui->darwin->show();
    ui->darwin->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/0/08/Darwin_Carpet_Python_%28Morelia_spilota_variegata%29_%288691290901%29.jpg/320px-Darwin_Carpet_Python_%28Morelia_spilota_variegata%29_%288691290901%29.jpg"));
    ui->mulga->show();
    ui->mulga->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/2/2d/Kingbrownsnake.jpg/320px-Kingbrownsnake.jpg"));
    ui->scrub->show();
    ui->scrub->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/a/ab/Australian_Scrub_Python_%28Morelia_kinghorni%29_Australia_Zoo.jpg"));
}


void MainWindow::on_pushButton_19_pressed()
{
    ui->stackedWidget->setCurrentIndex(19); // large snake colour to large green/blue/yellow
    ui->diamondpython->show();
    ui->diamondpython->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/Diamond_python.jpg/318px-Diamond_python.jpg"));
    ui->taipan->show();
    ui->taipan->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/5/58/FierceSnakeOlive.jpg/220px-FierceSnakeOlive.jpg"));
}


void MainWindow::on_lizard_pressed()
{
    ui->stackedWidget->setCurrentIndex(19); // order to lizard size
}


void MainWindow::on_pushButton_23_pressed()
{
    ui->stackedWidget->setCurrentIndex(6); // lizard size to small lizard
    ui->gardenskink->show();
    ui->gardenskink->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/d/dd/Common_Garden_Skink_%28Lampropholis_guichenoti%29_%288242612905%29.jpg/320px-Common_Garden_Skink_%28Lampropholis_guichenoti%29_%288242612905%29.jpg"));
    ui->coppertailed->show();
    ui->coppertailed->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Ctenotus_taeniolatus.jpg/220px-Ctenotus_taeniolatus.jpg"));
    ui->netted->show();
    ui->netted->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/a/aa/Central_Netted_Dragon_closeup_at_Sydney_Wildlife_World.jpg/320px-Central_Netted_Dragon_closeup_at_Sydney_Wildlife_World.jpg"));
    ui->knobtailed->show();
    ui->knobtailed->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Pale_Knob-tailed_Gecko_%28Nephrurus_laevissimus%29_%288656883171%29.jpg/320px-Pale_Knob-tailed_Gecko_%28Nephrurus_laevissimus%29_%288656883171%29.jpg"));
    ui->stripedlegless->show();
    ui->stripedlegless->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/b/bd/Striped_legless_lizard.jpg/320px-Striped_legless_lizard.jpg"));
}


void MainWindow::on_pushButton_24_pressed()
{
    ui->stackedWidget->setCurrentIndex(7); // lizard size to medium lizard
    ui->bluetongue->show();
    ui->bluetongue->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/6/64/Eastern_blue_tongued_lizard.jpg/320px-Eastern_blue_tongued_lizard.jpg"));
    ui->centralbearded->show();
    ui->centralbearded->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/7/74/Central_Bearded_Dragon.jpg/320px-Central_Bearded_Dragon.jpg"));
    ui->easternbearded->show();
    ui->easternbearded->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/Eastern_Bearded_Dragon_Gulgong.jpg/320px-Eastern_Bearded_Dragon_Gulgong.jpg"));
    ui->shingleback->show();
    ui->shingleback->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Shingleback_%2815921559152%29.jpg/320px-Shingleback_%2815921559152%29.jpg"));
    ui->frilleddragon->show();
    ui->frilleddragon->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/9/94/Chlamydosaurus_kingii%2C_the_Frilled_Lizard_%2813075035234%29.jpg/320px-Chlamydosaurus_kingii%2C_the_Frilled_Lizard_%2813075035234%29.jpg"));
}


void MainWindow::on_pushButton_25_pressed()
{
    ui->stackedWidget->setCurrentIndex(5); // lizard size to large lizard
    ui->lace->show();
    ui->lace->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/2/23/Lace_Monitor_Side.JPG/320px-Lace_Monitor_Side.JPG"));
    ui->heath->show();
    ui->heath->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/5/59/Heath_goanna_Varanus_rosenbergii_%288294973555%29.jpg/320px-Heath_goanna_Varanus_rosenbergii_%288294973555%29.jpg"));
    ui->sand->show();
    ui->sand->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Sand_Goanna_%2815302642673%29.jpg/320px-Sand_Goanna_%2815302642673%29.jpg"));
    ui->perentie->show();
    ui->perentie->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Perentie.jpg/320px-Perentie.jpg"));
    ui->water->show();
    ui->water->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/4/40/Mertens%27_water_monitor_01.jpg/320px-Mertens%27_water_monitor_01.jpg"));
}


void MainWindow::on_pushButton_27_pressed()
{
    ui->stackedWidget->setCurrentIndex(19); // large lizard to lizard size (back button)
}


void MainWindow::on_pushButton_26_pressed()
{
    ui->stackedWidget->setCurrentIndex(19); // small lizard to lizard size (back button)
}


void MainWindow::on_pushButton_28_pressed()
{
    ui->stackedWidget->setCurrentIndex(19); // large lizard to lizard size (back button)
}

void MainWindow::on_turtle_pressed()
{
    ui->stackedWidget->setCurrentIndex(20); // order to turtle
    ui->easternlongneck->show();
    ui->easternlongneck->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/4/49/Eastern_long_neck_tortoise_-_chelodina_longicollis03.jpg/320px-Eastern_long_neck_tortoise_-_chelodina_longicollis03.jpg"));
    ui->macquarie->show();
    ui->macquarie->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/8/82/Emydura_macquarii_in_the_Wollundry_Lagoon.jpg/304px-Emydura_macquarii_in_the_Wollundry_Lagoon.jpg"));
    ui->sawshell->show();
    ui->sawshell->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/thumb/c/c8/Northern_Australian_Snapping_Turtle_%28Myuchelys_latisternum%29_%289756835361%29.jpg/208px-Northern_Australian_Snapping_Turtle_%28Myuchelys_latisternum%29_%289756835361%29.jpg"));
    ui->northernsnapping->show();
    ui->northernsnapping->load(QUrl("https://upload.wikimedia.org/wikipedia/commons/a/a4/E_lavarackorum_2.jpg"));
}


void MainWindow::on_pushButton_29_pressed()
{
    ui->stackedWidget->setCurrentIndex(1); // turtle to order (back button)
}


void MainWindow::on_pushButton_30_pressed()
{
    ui->stackedWidget->setCurrentIndex(1); // snake size to order (back button)
}


void MainWindow::on_pushButton_31_pressed()
{
    ui->stackedWidget->setCurrentIndex(3); // small snake colour to snake size (back button)
    ui->slateygrey->close();
    ui->commontree->close();
    ui->whitelipped->close();
    ui->paleheaded->close();
    ui->keelback->close();
    ui->keelback->close();
    ui->goldencrowned->close();
    ui->babybrown->close();
    ui->pygmy->close();
    ui->browntree->close();
    ui->commonblue->close();
    ui->seakrait->close();
}


void MainWindow::on_pushButton_32_pressed()
{
    ui->stackedWidget->setCurrentIndex(3); // medium snake colour to snake size (back button)
    ui->redbellied->close();
    ui->bluebellied->close();
    ui->tiger->close();
    ui->copperhead->close();
    ui->greentree->close();
    ui->junglecarpet->close();
    ui->gwardar->close();
    ui->inland->close();
    ui->easternbrown->close();
    ui->roughscaled->close();
    ui->dugite->close();
}


void MainWindow::on_pushButton_33_pressed()
{
    ui->stackedWidget->setCurrentIndex(3); // large snake colour to snake size (back button)
    ui->murraydarling->close();
    ui->olivepython->close();
    ui->oenpelli->close();
    ui->blackheaded->close();
    ui->coastalcarpet->close();
    ui->bredli->close();
    ui->woma->close();
    ui->darwin->close();
    ui->mulga->close();
    ui->scrub->close();
    ui->diamondpython->close();
    ui->taipan->close();
}


void MainWindow::on_pushButton_34_pressed()
{
    ui->stackedWidget->setCurrentIndex(1); // lizard size to order (back button)
    ui->gardenskink->close();
    ui->coppertailed->close();
    ui->netted->close();
    ui->knobtailed->close();
    ui->stripedlegless->close();
    ui->bluetongue->close();
    ui->centralbearded->close();
    ui->easternbearded->close();
    ui->shingleback->close();
    ui->frilleddragon->close();
    ui->lace->close();
    ui->heath->close();
    ui->sand->close();
    ui->perentie->close();
    ui->water->close();
}


void MainWindow::on_pushButton_16_pressed()
{
    ui->stackedWidget->setCurrentIndex(14); // medium green/blue/yellow snake to medium colour (back button)
}


void MainWindow::on_pushButton_14_pressed()
{
    ui->stackedWidget->setCurrentIndex(14); // medium grey/black snake to medium colour (back button)
}


void MainWindow::on_pushButton_15_pressed()
{
    ui->stackedWidget->setCurrentIndex(14); // medium brown/red snake to medium colour (back button);
}


void MainWindow::on_pushButton_20_pressed()
{
    ui->stackedWidget->setCurrentIndex(15); // large grey/black snake to large colour (back button);
}


void MainWindow::on_pushButton_21_pressed()
{
    ui->stackedWidget->setCurrentIndex(15); // large brown/red snake to large colour (back button);
}


void MainWindow::on_pushButton_73_pressed()
{
    ui->stackedWidget->setCurrentIndex(0); // settings to home (back button)
}


void MainWindow::on_pushButton_35_pressed()
{
    ui->stackedWidget->setCurrentIndex(21); // home to settings
}



void MainWindow::on_pushButton_36_pressed()
{
    QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}


void MainWindow::on_pushButton_74_pressed()
{
    QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}


void MainWindow::on_pushButton_37_pressed()
{
    QProcess *networkPage = new QProcess(this);
    QString program = "control";
    QStringList arguments;
    arguments << "ncpa.cpl";
    networkPage->startDetached(program, arguments); // Mem leak warning triggered because QT can't close the opened window, but as long as the user does it it's fine.
}

void MainWindow::on_pushButton_40_pressed()
{
    QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}


void MainWindow::on_pushButton_39_pressed()
{
    QProcess *devicesPage = new QProcess(this);
    QString program = "control";
    QStringList arguments;
    arguments << "printers";
    devicesPage->startDetached(program, arguments); //same mem leak warning as above, disregard
}


void MainWindow::on_pushButton_38_pressed()
{
    QProcess *locationPage = new QProcess(this);
    QString program = "control";
    QStringList arguments;
    arguments << "/name Microsoft.LocationSettings";
    locationPage->startDetached(program, arguments); //same mem leak warning as above, disregard
}


void MainWindow::on_log_pressed()
{
    ui->stackedWidget->setCurrentIndex(22); // main menu to log wizard
}


void MainWindow::on_pushButton_41_pressed()
{
    ui->stackedWidget->setCurrentIndex(0); // log wizard to main menu (back button)
}


void MainWindow::on_pushButton_42_pressed()
{
    ui->stackedWidget->setCurrentIndex(23); // log wizard to log number + reading all stuff on page



}


void MainWindow::on_pushButton_91_pressed()
{
    ui->stackedWidget->setCurrentIndex(22); // log number to wizard (back button)
}


void MainWindow::on_pushButton_89_pressed()
{
    ui->stackedWidget->setCurrentIndex(24); // log number to sensors
}


void MainWindow::on_pushButton_94_pressed()
{
    ui->stackedWidget->setCurrentIndex(23); //sensors to log number (back button)
}


void MainWindow::on_pushButton_93_pressed()
{
    ui->stackedWidget->setCurrentIndex(25); // sensors to datasheet, and fills in datasheet (all the code below)

    QString speciescode = ui->FL->toPlainText();
    ui->datasheet->setItem(0,0, new QTableWidgetItem(speciescode));

    QString common = ui->commonname->toPlainText();
    ui->datasheet->setItem(1,0, new QTableWidgetItem(common));

    QString binomial = ui->scientificname->toPlainText();
    ui->datasheet->setItem(2,0, new QTableWidgetItem(binomial));

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    ui->datasheet->setItem(3,0, new QTableWidgetItem(formattedTime));

    QString number = ui->specimens->toPlainText();
    ui->datasheet->setItem(4,0, new QTableWidgetItem(number));

    if (ui->Yes->isChecked()){
        ui->datasheet->setItem(5,0, new QTableWidgetItem("Exact"));
    }
    else if (ui->nobutt->isChecked()){
        ui->datasheet->setItem(5,0, new QTableWidgetItem("n/a"));
    }
    else if (ui->est->isChecked()){
        ui->datasheet->setItem(5,0, new QTableWidgetItem("Estimate"));
    }




}


void MainWindow::on_pushButton_101_pressed()
{
    ui->stackedWidget->setCurrentIndex(24); // datasheet to sensors (back button)
}


void MainWindow::on_pushButton_100_pressed()
{
    ui->stackedWidget->setCurrentIndex(0); // datasheet to home (finish)
}


void MainWindow::on_system_pressed()
{
    QApplication::setStyle(("WindowsVista"));
}


void MainWindow::on_fusion_pressed()
{
    QApplication::setStyle("Fusion");
}


void MainWindow::on_geometric_pressed()
{
    QApplication::setStyle("Windows");
}


void MainWindow::on_dark_pressed()
{
    QPalette darkPalette;
       darkPalette.setColor(QPalette::Window, QColor(53,53,53));
       darkPalette.setColor(QPalette::WindowText, Qt::white);
       darkPalette.setColor(QPalette::Base, QColor(25,25,25));
       darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
       darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
       darkPalette.setColor(QPalette::ToolTipText, Qt::white);
       darkPalette.setColor(QPalette::Text, Qt::white);
       darkPalette.setColor(QPalette::Button, QColor(53,53,53));
       darkPalette.setColor(QPalette::ButtonText, Qt::white);
       darkPalette.setColor(QPalette::BrightText, Qt::red);
       darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

       darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
       darkPalette.setColor(QPalette::HighlightedText, Qt::black);

       qApp->setPalette(darkPalette);

       qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
}


void MainWindow::on_light_pressed()
{
    qApp->setPalette(this->style()->standardPalette());
    qApp->setStyleSheet("");
}

void MainWindow::on_pushButton_102_pressed()
{
    QFile data("D:/ faunasearch.csv");
    if (data.open(QFile::WriteOnly | QIODevice::Append)) {
     }
    QTextStream output(&data);
    output <<"ID"<<","<<"Name"<<","<<"Age"<< '\n';
    for(int i=0; i<20; i++) {
        output << ui->datasheet->item(i, 0) << '\n';
    }
    data.close();
}

void MainWindow::on_pushButton_90_pressed()
{
     QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}


void MainWindow::on_pushButton_92_pressed()
{
     QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}


void MainWindow::on_pushButton_99_pressed()
{
     QDesktopServices::openUrl(QUrl("https://docs.google.com/document/d/1dqd6brhbGGFGRgJDN0F06ETU68-pMMOCruvpOOpcHJQ/edit?usp=sharing"));
}

