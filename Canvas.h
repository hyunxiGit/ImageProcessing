#pragma once

class CCanvas : public CWnd
{
public:
	CCanvas();
	virtual ~CCanvas();

protected:
	void OnPaint();
	DECLARE_MESSAGE_MAP();

};