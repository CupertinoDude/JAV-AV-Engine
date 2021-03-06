#pragma once
#include <QItemDelegate>
class QAbstractItemView ;
class QComboBoxEx ;
class HexEditorDelegate :
	public QItemDelegate
{
	Q_OBJECT
public:
	explicit HexEditorDelegate(QAbstractItemView *qItemView , QObject *parent = 0);

	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
	QWidget *createEditor(QWidget *parent,	const QStyleOptionViewItem &option,	const QModelIndex &index) const;
	void setEditorData(QWidget *editor, const QModelIndex &index) const;
	void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

	~HexEditorDelegate(void);
	private slots:
		void commitAndCloseEditor();
		void GetPopUp();
		void GetHidePopUp();
		void CommitAndCloseSpinBox();
	private:
		QAbstractItemView *m_qItemView ;
		int durationColumn;
		

};
