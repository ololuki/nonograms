#ifndef WHOLEFIELD_H
#define WHOLEFIELD_H

#include <memory>
#include "DrawingAreaField.h"
#include "BlocksDescriptionField.h"


///
/// \brief WholeField class is "interface" that contains whole data about Field.
/// You should invoke RootField(width, height) constructor in child class constructor
///
class WholeField : public BlocksDescriptionField, virtual public RootField
{
	friend class WholeFieldImpl;	// for copy c-tor
public:
	WholeField(size_t width, size_t height);
	WholeField(const WholeField &field);
	virtual ~WholeField();
	std::shared_ptr<DrawingAreaField> drawingArea();
	virtual void clearDrawingArea() = 0;
	virtual void clearBlocksDescription() = 0;
protected:
	std::shared_ptr<DrawingAreaField> drawingAreaField;
};

#endif // WHOLEFIELD_H
