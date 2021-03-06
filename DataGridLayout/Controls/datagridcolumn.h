#ifndef DATAGRIDCOLUMN_H
#define DATAGRIDCOLUMN_H

#include <QObject>
#include <QQuickItem>

class DataGrid;
class DataGridColumn : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool headerVisible READ headerVisible WRITE setHeaderVisible NOTIFY headerVisibleChanged)
    Q_PROPERTY(bool itemVisible READ itemVisible WRITE setItemVisible NOTIFY itemVisibleChanged)
    Q_PROPERTY(bool sortActive READ sortActive WRITE setSortActive NOTIFY sortActiveChanged)
    Q_PROPERTY(bool sortEnabled READ sortEnabled WRITE setSortEnabled NOTIFY sortEnabledChanged)
    Q_PROPERTY(DataGrid* dataGrid READ dataGrid WRITE setDataGrid NOTIFY dataGridChanged)
    Q_PROPERTY(int column READ column WRITE setColumn NOTIFY columnChanged)
    Q_PROPERTY(int columnSpan READ columnSpan WRITE setColumnSpan NOTIFY columnSpanChanged)
    Q_PROPERTY(int roleIndex READ roleIndex)
    Q_PROPERTY(int row READ row WRITE setRow NOTIFY rowChanged)
    Q_PROPERTY(int rowSpan READ rowSpan WRITE setRowSpan NOTIFY rowSpanChanged)
    Q_PROPERTY(QQmlComponent* headerDelegate READ headerDelegate WRITE setHeaderDelegate NOTIFY headerDelegateChanged)
    Q_PROPERTY(QQmlComponent* itemDelegate READ itemDelegate WRITE setItemDelegate NOTIFY itemDelegateChanged)
    Q_PROPERTY(qreal maxWidth READ maxWidth WRITE setMaxWidth NOTIFY maxWidthChanged)
    Q_PROPERTY(qreal minWidth READ minWidth WRITE setMinWidth NOTIFY minWidthChanged)
    Q_PROPERTY(Qt::Alignment itemAlignment READ itemAlignment WRITE setItemAlignment NOTIFY itemAlignmentChanged)
    Q_PROPERTY(QVariant role READ role WRITE setRole NOTIFY roleChanged)
    Q_PROPERTY(QVariant width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(SizeMode sizeMode READ sizeMode WRITE setSizeMode NOTIFY sizeModeChanged)
public:
    enum SizeMode {
        AutoSize = 0,
        FixedSize = 1,
        RemainingSize = 2
    };

    Q_ENUM(SizeMode)

    explicit DataGridColumn(QObject *parent = nullptr);
    bool headerVisible() const;
    bool itemVisible() const;
    bool sortActive() const;
    bool sortEnabled() const;
    DataGrid* dataGrid() const;
    int column() const;
    int columnSpan() const;
    int roleIndex() const;
    int row() const;
    int rowSpan() const;
    QQmlComponent* headerDelegate() const;
    QQmlComponent* itemDelegate() const;
    qreal maxWidth() const;
    qreal minWidth() const;
    Qt::Alignment itemAlignment() const;
    QVariant role() const;
    QVariant width() const;
    SizeMode sizeMode() const;

signals:
    void columnChanged(int column);
    void columnSpanChanged(int columnSpan);
    void dataGridChanged(DataGrid* dataGrid);
    void headerDelegateChanged(QQmlComponent* headerDelegate);
    void headerVisibleChanged(bool headerVisible);
    void maxWidthChanged(qreal maxWidth);
    void minWidthChanged(qreal minWidth);
    void rowChanged(int row);
    void itemAlignmentChanged(Qt::Alignment itemAlignment);
    void itemDelegateChanged(QQmlComponent* itemDelegate);
    void itemVisibleChanged(bool itemVisible);
    void roleChanged(QVariant role);
    void rowSpanChanged(int rowSpan);
    void sizeModeChanged(SizeMode sizeMode);
    void sortActiveChanged(bool sortActive);
    void sortEnabledChanged(bool sortEnabled);
    void widthChanged(QVariant width);

public slots:
    void setColumn(int column);
    void setColumnSpan(int columnSpan);
    void setDataGrid(DataGrid* dataGrid);
    void setHeaderDelegate(QQmlComponent* headerDelegate);
    void setHeaderVisible(bool headerVisible);
    void setMaxWidth(qreal maxWidth);
    void setMinWidth(qreal minWidth);
    void setRow(int row);
    void setItemAlignment(Qt::Alignment itemAlignment);
    void setItemDelegate(QQmlComponent* itemDelegate);
    void setItemVisible(bool itemVisible);
    void setRole(QVariant role);
    void setRowSpan(int rowSpan);
    void setSizeMode(SizeMode sizeMode);
    void setSortActive(bool sortActive);
    void setSortEnabled(bool sortEnabled);
    void setWidth(QVariant width);

private:
    bool m_headerVisible;
    bool m_itemVisible;
    bool m_sortActive;
    bool m_sortEnabled;
    DataGrid* m_dataGrid;
    int m_column;
    int m_columnSpan;
    int m_row;
    int m_rowSpan;
    QQmlComponent *m_headerDelegate;
    QQmlComponent *m_itemDelegate;
    qreal m_maxWidth;
    qreal m_minWidth;
    Qt::Alignment m_itemAlignment;
    QVariant m_role;
    QVariant m_width;
    SizeMode m_sizeMode;
};

#endif // DATAGRIDCOLUMN_H
