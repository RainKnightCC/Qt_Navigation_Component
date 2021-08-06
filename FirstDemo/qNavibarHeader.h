#ifndef QNAVIBARHEADER_H
#define QNAVIBARHEADER_H

#include <QLabel>
#include <QToolButton>

/**
 * @brief The QNavibarHeader class
 * @author wade.chen
 * @date 2021.08.06
 * @abstract customize navigationbar component
 * @copyright ©2021 SOINC INC, All rights reserved.
 */
class QNavibarHeader : public QLabel
{
    Q_OBJECT
public:
    QNavibarHeader();
    explicit QNavibarHeader(QWidget *parent, Qt::WindowFlags flag );
    explicit QNavibarHeader(const QString text, QWidget *parent, Qt::WindowFlags flag);

    QToolButton *qTBtn;

signals:
    void buttonClick(bool cl);

private:
    void createButton();

protected:
    void resizeEvent(QResizeEvent *event);

};

class NavBarTitleButton : public QToolButton
{
    Q_OBJECT
public:
    explicit NavBarTitleButton(QWidget *parent);

private:
    QSize sizeHint() const;
    QSize minimumSizeHint() const;

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // QNAVIBARHEADER_H
