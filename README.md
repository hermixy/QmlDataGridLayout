DataGridLayout.qml has the main control, it depends on a couple other files.

DataGridLayout {
        anchors.fill: parent
        itemHeight: 50
        objectName: "datagrid"
        selectionMode: DataGrid.SingleRow

        DataGridColumn {
            column: 0
            columnSpan: 3
            minWidth: 100
            role: "Name"
            sizeMode: DataGridColumn.FixedSize
            width: 310
        }

        DataGridColumn {
            column: 1
            columnSpan: 2
            itemAlignment: Qt.AlignLeft
            itemDelegate: numberDelegate
            role: "Price"
            row: 1
            sizeMode: DataGridColumn.FixedSize
            width: 160
        }

        DataGridColumn {
            column: 3
            itemAlignment: Qt.AlignJustify
            itemDelegate: numberDelegate
            minWidth: 200
            role: "Cost"
            row: 1
            sizeMode: DataGridColumn.RemainingSize
        }

        Component {
            id: numberDelegate

            TextField {
                text: modelData
                onEditingFinished: {
                    setModelData(Number(text));
                }
                validator: IntValidator { }
            }
        }
    }