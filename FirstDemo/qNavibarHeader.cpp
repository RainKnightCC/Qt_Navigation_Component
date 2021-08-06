#include <QStylePainter>
#include <QStyleOptionToolButton>

#include "qNavibarHeader.h"

#define  BUTTON_X_POSITION            23
#define BUTTON_Y_POSITION               3
#define BUTTON_DEFAULT_HEIGHT   20
#define BUTTON_DEFAULT_WIDTH    20

QNavibarHeader::QNavibarHeader() {
    // constructure
}


QNavibarHeader::QNavibarHeader(QWidget *parent, Qt::WindowFlags flag) : QLabel(parent, flag) {
    // constructure
}

QNavibarHeader::QNavibarHeader(const QString text, QWidget *parent, Qt::WindowFlags flag) : QLabel(text, parent, flag) {
    // constructure
}

void QNavibarHeader::createButton() {

}


void QNavibarHeader::resizeEvent(QResizeEvent *event) {
    qTBtn->setGeometry(width()-BUTTON_X_POSITION, BUTTON_Y_POSITION, BUTTON_DEFAULT_HEIGHT, BUTTON_DEFAULT_WIDTH);
    QLabel::resizeEvent(event);
}


NavBarTitleButton::NavBarTitleButton(QWidget *parent) : QToolButton(parent) {

}

QSize NavBarTitleButton::sizeHint() const {
    return QSize(-1, -1);
}

QSize NavBarTitleButton::minimumSizeHint() const {
    return QSize(-1, -1);
}

void NavBarTitleButton::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);

    QStylePainter painter;
    QStyleOptionToolButton optBtn;

    this->initStyleOption(&optBtn);
    painter.drawControl(QStyle::CE_PushButton, optBtn);
    QFont font;
    painter.setFont(font);
    QFontMetrics fm(font);

    painter.translate(width()/2 + fm.ascent()/2, fm.height()/2 + fm.lineWidth()/2);
    painter.rotate(270);
    painter.drawText(0, 0, text());

}
