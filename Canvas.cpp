#include "stdafx.h"

#include "Canvas.h"

using namespace Gdiplus;
BEGIN_MESSAGE_MAP(CCanvas, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

CCanvas::CCanvas()
{

}

CCanvas::~CCanvas()
{

}

void CCanvas::OnPaint()
{
	CWnd::OnPaint();
	CRect rcClient;
	GetClientRect(&rcClient);

	CDC *pDC = GetDC();

	Graphics graphics(pDC->m_hDC);

	Pen pen(Color(255, 0, 0), 0);

	int x1 = 100;

	int y1 = 100;

	int x2 = 600;

	int y2 = 600;


	graphics.DrawLine(&pen, x1,y1,x2,y2);

	ReleaseDC(pDC);
}