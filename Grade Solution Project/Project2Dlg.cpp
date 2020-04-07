
// Project2Dlg.cpp : ���� ����
//

#include "stdafx.h"
#include "Project2.h"
#include "Project2Dlg.h"
#include "afxdialogex.h"
#include <math.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CProject2Dlg ��ȭ ����




CProject2Dlg::CProject2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CProject2Dlg::IDD, pParent)
	, m_nPreScore(0)
	, m_nScoreP1(0)
	, m_nScoreP2(0)
	, m_nScoreP3(0)
	, m_nScoreP4(0)
	, m_nScoreP5(0)
	, m_nScoreP6(0)
	, m_nScoreS1(0)
	, m_nScoreS2(0)
	, m_nScoreS3(0)
	, m_nScoreS4(0)
	, m_nScoreS5(0)
	, m_nScoreS6(0)
	, m_nScoreS7(0)
	, m_nScoreS8(0)
	, m_nScoreS9(0)
	, m_nScoreS10(0)
	, m_nScoreS11(0)
	, m_nScoreS12(0)
	, m_nScoreS13(0)
	, m_nScoreS14(0)
	, m_nScoreS15(0)
	, m_nScoreS16(0)
	, m_nScoreS17(0)
	, m_nScoreS18(0)
	, m_nScoreS19(0)
	, m_nScoreS20(0)
	, m_nScoreS21(0)
	, m_nScoreS22(0)
	, m_nScoreS23(0)
	, m_nScoreS24(0)
	, m_nScoreS25(0)
	, m_nScoreS26(0)
	, m_nScoreS27(0)
	, m_nScoreS28(0)
	, m_nScoreS29(0)
	, m_nCountP(0)
	, m_nCountS(0)
	, m_nPLeave(0)
	, m_nSLeave(0)
	, m_nMajorDeepOrOther(0)
	, m_nPScore(0)
	, m_nSScore(0)
	, m_dGoalscore(0)
	, m_dLeavescore(0)
	, m_bViewSolution(false)
	, m_dSubjectPart1(0)
	, m_dSubjectPart2(0)
	, m_dSubjectPart3(0)
	, m_dSubjectPart4(0)
	, m_nScoreS30(0)
	, m_dSubjectPart5(0)
	, m_dSubjectPart6(0)
	, m_dSubjectPart7(0)
	, m_nPart1(0)
	, m_nPart2(0)
	, m_nPart3(0)
	, m_nPart4(0)
	, m_nPart5(0)
	, m_nPart6(0)
	, m_nPart7(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CProject2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK_P1, m_CheckP1);
	DDX_Control(pDX, IDC_CHECK_P2, m_CheckP2);
	DDX_Control(pDX, IDC_CHECK_P3, m_CheckP3);
	DDX_Control(pDX, IDC_CHECK_P4, m_CheckP4);
	DDX_Control(pDX, IDC_CHECK_P5, m_CheckP5);
	DDX_Control(pDX, IDC_CHECK_P6, m_CheckP6);
	DDX_Control(pDX, IDC_CHECK_S1, m_CheckS1);
	DDX_Control(pDX, IDC_CHECK_S10, m_CheckS10);
	DDX_Control(pDX, IDC_CHECK_S11, m_CheckS11);
	DDX_Control(pDX, IDC_CHECK_S12, m_CheckS12);
	DDX_Control(pDX, IDC_CHECK_S13, m_CheckS13);
	DDX_Control(pDX, IDC_CHECK_S14, m_CheckS14);
	DDX_Control(pDX, IDC_CHECK_S15, m_CheckS15);
	DDX_Control(pDX, IDC_CHECK_S16, m_CheckS16);
	DDX_Control(pDX, IDC_CHECK_S17, m_CheckS17);
	DDX_Control(pDX, IDC_CHECK_S18, m_CheckS18);
	DDX_Control(pDX, IDC_CHECK_S19, m_CheckS19);
	DDX_Control(pDX, IDC_CHECK_S2, m_CheckS2);
	DDX_Control(pDX, IDC_CHECK_S20, m_CheckS20);
	DDX_Control(pDX, IDC_CHECK_S21, m_CheckS21);
	DDX_Control(pDX, IDC_CHECK_S22, m_CheckS22);
	DDX_Control(pDX, IDC_CHECK_S23, m_CheckS23);
	DDX_Control(pDX, IDC_CHECK_S24, m_CheckS24);
	DDX_Control(pDX, IDC_CHECK_S25, m_CheckS25);
	DDX_Control(pDX, IDC_CHECK_S26, m_CheckS26);
	DDX_Control(pDX, IDC_CHECK_S27, m_CheckS27);
	DDX_Control(pDX, IDC_CHECK_S28, m_CheckS28);
	DDX_Control(pDX, IDC_CHECK_S29, m_CheckS29);
	DDX_Control(pDX, IDC_CHECK_S3, m_CheckS3);
	DDX_Control(pDX, IDC_CHECK_S4, m_CheckS4);
	DDX_Control(pDX, IDC_CHECK_S5, m_CheckS5);
	DDX_Control(pDX, IDC_CHECK_S6, m_CheckS6);
	DDX_Control(pDX, IDC_CHECK_S7, m_CheckS7);
	DDX_Control(pDX, IDC_CHECK_S8, m_CheckS8);
	DDX_Control(pDX, IDC_CHECK_S9, m_CheckS9);
	DDX_Control(pDX, IDC_COMBO_P1, m_ComboP1);
	DDX_Control(pDX, IDC_COMBO_P2, m_ComboP2);
	DDX_Control(pDX, IDC_COMBO_P3, m_ComboP3);
	DDX_Control(pDX, IDC_COMBO_P4, m_ComboP4);
	DDX_Control(pDX, IDC_COMBO_P5, m_ComboP5);
	DDX_Control(pDX, IDC_COMBO_P6, m_ComboP6);
	DDX_Control(pDX, IDC_COMBO_S1, m_ComboS1);
	DDX_Control(pDX, IDC_COMBO_S10, m_ComboS10);
	DDX_Control(pDX, IDC_COMBO_S11, m_ComboS11);
	DDX_Control(pDX, IDC_COMBO_S12, m_ComboS12);
	DDX_Control(pDX, IDC_COMBO_S13, m_ComboS13);
	DDX_Control(pDX, IDC_COMBO_S14, m_ComboS14);
	DDX_Control(pDX, IDC_COMBO_S15, m_ComboS15);
	DDX_Control(pDX, IDC_COMBO_S16, m_ComboS16);
	DDX_Control(pDX, IDC_COMBO_S17, m_ComboS17);
	DDX_Control(pDX, IDC_COMBO_S18, m_ComboS18);
	DDX_Control(pDX, IDC_COMBO_S19, m_ComboS19);
	DDX_Control(pDX, IDC_COMBO_S2, m_ComboS2);
	DDX_Control(pDX, IDC_COMBO_S20, m_ComboS20);
	DDX_Control(pDX, IDC_COMBO_S21, m_ComboS21);
	DDX_Control(pDX, IDC_COMBO_S22, m_ComboS22);
	DDX_Control(pDX, IDC_COMBO_S23, m_ComboS23);
	DDX_Control(pDX, IDC_COMBO_S24, m_ComboS24);
	DDX_Control(pDX, IDC_COMBO_S25, m_ComboS25);
	DDX_Control(pDX, IDC_COMBO_S26, m_ComboS26);
	DDX_Control(pDX, IDC_COMBO_S27, m_ComboS27);
	DDX_Control(pDX, IDC_COMBO_S28, m_ComboS28);
	DDX_Control(pDX, IDC_COMBO_S29, m_ComboS29);
	DDX_Control(pDX, IDC_COMBO_S3, m_ComboS3);
	DDX_Control(pDX, IDC_COMBO_S4, m_ComboS4);
	DDX_Control(pDX, IDC_COMBO_S5, m_ComboS5);
	DDX_Control(pDX, IDC_COMBO_S6, m_ComboS6);
	DDX_Control(pDX, IDC_COMBO_S7, m_ComboS7);
	DDX_Control(pDX, IDC_COMBO_S8, m_ComboS8);
	DDX_Control(pDX, IDC_COMBO_S9, m_ComboS9);
	DDX_Control(pDX, IDC_LIST_ABLE, m_ListAble);
	DDX_Control(pDX, IDC_LIST_WILL, m_ListWill);
	DDX_Control(pDX, IDC_COMBO_MOVE, m_cbMove);
	DDX_Control(pDX, IDC_CHECK_S30, m_CheckS30);
	DDX_Control(pDX, IDC_COMBO_S30, m_ComboS30);
}

BEGIN_MESSAGE_MAP(CProject2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//ON_CBN_SELCHANGE(IDC_COMBO33, &CProject2Dlg::OnCbnSelchangeCombo33)
	ON_CBN_SELCHANGE(IDC_COMBO_P1, &CProject2Dlg::OnSelchangeComboP1)
	ON_CBN_SELCHANGE(IDC_COMBO_P2, &CProject2Dlg::OnSelchangeComboP2)
	ON_CBN_SELCHANGE(IDC_COMBO_P3, &CProject2Dlg::OnSelchangeComboP3)
	ON_CBN_SELCHANGE(IDC_COMBO_P4, &CProject2Dlg::OnSelchangeComboP4)
	ON_CBN_SELCHANGE(IDC_COMBO_P5, &CProject2Dlg::OnSelchangeComboP5)
//	ON_CBN_SELCHANGE(IDC_COMBO_P6, &CProject2Dlg::OnSelchangeComboP6)
ON_CBN_SELCHANGE(IDC_COMBO_P6, &CProject2Dlg::OnSelchangeComboP6)
ON_CBN_SELCHANGE(IDC_COMBO_S1, &CProject2Dlg::OnSelchangeComboS1)
ON_CBN_SELCHANGE(IDC_COMBO_S2, &CProject2Dlg::OnSelchangeComboS2)
ON_CBN_SELCHANGE(IDC_COMBO_S3, &CProject2Dlg::OnSelchangeComboS3)
ON_CBN_SELCHANGE(IDC_COMBO_S4, &CProject2Dlg::OnSelchangeComboS4)
ON_CBN_SELCHANGE(IDC_COMBO_S5, &CProject2Dlg::OnSelchangeComboS5)
ON_CBN_SELCHANGE(IDC_COMBO_S6, &CProject2Dlg::OnSelchangeComboS6)
ON_CBN_SELCHANGE(IDC_COMBO_S7, &CProject2Dlg::OnSelchangeComboS7)
ON_CBN_SELCHANGE(IDC_COMBO_S8, &CProject2Dlg::OnSelchangeComboS8)
ON_CBN_SELCHANGE(IDC_COMBO_S9, &CProject2Dlg::OnSelchangeComboS9)
ON_CBN_SELCHANGE(IDC_COMBO_S10, &CProject2Dlg::OnSelchangeComboS10)
ON_CBN_SELCHANGE(IDC_COMBO_S11, &CProject2Dlg::OnSelchangeComboS11)
ON_CBN_SELCHANGE(IDC_COMBO_S12, &CProject2Dlg::OnSelchangeComboS12)
ON_CBN_SELCHANGE(IDC_COMBO_S13, &CProject2Dlg::OnSelchangeComboS13)
ON_CBN_SELCHANGE(IDC_COMBO_S14, &CProject2Dlg::OnSelchangeComboS14)
ON_CBN_SELCHANGE(IDC_COMBO_S15, &CProject2Dlg::OnSelchangeComboS15)
ON_CBN_SELCHANGE(IDC_COMBO_S16, &CProject2Dlg::OnSelchangeComboS16)
ON_CBN_SELCHANGE(IDC_COMBO_S17, &CProject2Dlg::OnSelchangeComboS17)
ON_CBN_SELCHANGE(IDC_COMBO_S18, &CProject2Dlg::OnSelchangeComboS18)
ON_CBN_SELCHANGE(IDC_COMBO_S19, &CProject2Dlg::OnSelchangeComboS19)
ON_CBN_SELCHANGE(IDC_COMBO_S20, &CProject2Dlg::OnSelchangeComboS20)
ON_CBN_SELCHANGE(IDC_COMBO_S21, &CProject2Dlg::OnSelchangeComboS21)
ON_CBN_SELCHANGE(IDC_COMBO_S22, &CProject2Dlg::OnSelchangeComboS22)
ON_CBN_SELCHANGE(IDC_COMBO_S23, &CProject2Dlg::OnSelchangeComboS23)
ON_CBN_SELCHANGE(IDC_COMBO_S24, &CProject2Dlg::OnSelchangeComboS24)
ON_CBN_SELCHANGE(IDC_COMBO_S25, &CProject2Dlg::OnSelchangeComboS25)
ON_CBN_SELCHANGE(IDC_COMBO_S26, &CProject2Dlg::OnSelchangeComboS26)
ON_CBN_SELCHANGE(IDC_COMBO_S27, &CProject2Dlg::OnSelchangeComboS27)
ON_CBN_SELCHANGE(IDC_COMBO_S28, &CProject2Dlg::OnSelchangeComboS28)
ON_CBN_SELCHANGE(IDC_COMBO_S29, &CProject2Dlg::OnSelchangeComboS29)
ON_BN_CLICKED(IDC_BUTTON_CALC, &CProject2Dlg::OnClickedButtonCalc)
ON_COMMAND(IDC_RADIO_DEEPMAJOR, &CProject2Dlg::OnRadioDeepmajor)
ON_COMMAND(IDC_RADIO_OTHERMAJOR, &CProject2Dlg::OnRadioOthermajor)
ON_CBN_SELCHANGE(IDC_COMBO_MOVE, &CProject2Dlg::OnSelchangeComboMove)
ON_BN_CLICKED(IDC_BUTTON_SOL, &CProject2Dlg::OnClickedButtonSol)
ON_CBN_SELCHANGE(IDC_COMBO_S30, &CProject2Dlg::OnSelchangeComboS30)
END_MESSAGE_MAP()


// CProject2Dlg �޽��� ó����

BOOL CProject2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// �� ��ȭ ������ �������� �����մϴ�. ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CProject2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�. ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CProject2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CProject2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CProject2Dlg::OnCbnSelchangeCombo33()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}


void CProject2Dlg::OnSelchangeComboP1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP1.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}
	else
	{
		if(m_ComboP1.GetCurSel()==0)
		{
			m_nScoreP1=4.5;
		}
		if(m_ComboP1.GetCurSel()==1)
		{
			m_nScoreP1=4.0;
		}
		if(m_ComboP1.GetCurSel()==2)
		{
			m_nScoreP1=3.5;
		}
		if(m_ComboP1.GetCurSel()==3)
		{
			m_nScoreP1=3.0;
		}
		if(m_ComboP1.GetCurSel()==4)
		{
			m_nScoreP1=2.5;
		}
		if(m_ComboP1.GetCurSel()==5)
		{
			m_nScoreP1=2.0;
		}
		if(m_ComboP1.GetCurSel()==6)
		{
			m_nScoreP1=1.5;
		}
		if(m_ComboP1.GetCurSel()==7)
		{
			m_nScoreP1=1.0;
		}
		if(m_ComboP1.GetCurSel()==8)
		{
			m_nScoreP1=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboP2()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP2.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboP2.GetCurSel()==0)
		{
			m_nScoreP2=4.5;
		}
		if(m_ComboP2.GetCurSel()==1)
		{
			m_nScoreP2=4.0;
		}
		if(m_ComboP2.GetCurSel()==2)
		{
			m_nScoreP2=3.5;
		}
		if(m_ComboP2.GetCurSel()==3)
		{
			m_nScoreP2=3.0;
		}
		if(m_ComboP2.GetCurSel()==4)
		{
			m_nScoreP2=2.5;
		}
		if(m_ComboP2.GetCurSel()==5)
		{
			m_nScoreP2=2.0;
		}
		if(m_ComboP2.GetCurSel()==6)
		{
			m_nScoreP2=1.5;
		}
		if(m_ComboP2.GetCurSel()==7)
		{
			m_nScoreP2=1.0;
		}
		if(m_ComboP2.GetCurSel()==8)
		{
			m_nScoreP2=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboP3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP3.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboP3.GetCurSel()==0)
		{
			m_nScoreP3=4.5;
		}
		if(m_ComboP3.GetCurSel()==1)
		{
			m_nScoreP3=4.0;
		}
		if(m_ComboP3.GetCurSel()==2)
		{
			m_nScoreP3=3.5;
		}
		if(m_ComboP3.GetCurSel()==3)
		{
			m_nScoreP3=3.0;
		}
		if(m_ComboP3.GetCurSel()==4)
		{
			m_nScoreP3=2.5;
		}
		if(m_ComboP3.GetCurSel()==5)
		{
			m_nScoreP3=2.0;
		}
		if(m_ComboP3.GetCurSel()==6)
		{
			m_nScoreP3=1.5;
		}
		if(m_ComboP3.GetCurSel()==7)
		{
			m_nScoreP3=1.0;
		}
		if(m_ComboP3.GetCurSel()==8)
		{
			m_nScoreP3=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboP4()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP4.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboP4.GetCurSel()==0)
		{
			m_nScoreP4=4.5;
		}
		if(m_ComboP4.GetCurSel()==1)
		{
			m_nScoreP4=4.0;
		}
		if(m_ComboP4.GetCurSel()==2)
		{
			m_nScoreP4=3.5;
		}
		if(m_ComboP4.GetCurSel()==3)
		{
			m_nScoreP4=3.0;
		}
		if(m_ComboP4.GetCurSel()==4)
		{
			m_nScoreP4=2.5;
		}
		if(m_ComboP4.GetCurSel()==5)
		{
			m_nScoreP4=2.0;
		}
		if(m_ComboP4.GetCurSel()==6)
		{
			m_nScoreP4=1.5;
		}
		if(m_ComboP4.GetCurSel()==7)
		{
			m_nScoreP4=1.0;
		}
		if(m_ComboP4.GetCurSel()==8)
		{
			m_nScoreP4=0;
		}
	}
}



void CProject2Dlg::OnSelchangeComboP5()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP5.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboP5.GetCurSel()==0)
		{
			m_nScoreP5=4.5;
		}
		if(m_ComboP5.GetCurSel()==1)
		{
			m_nScoreP5=4.0;
		}
		if(m_ComboP5.GetCurSel()==2)
		{
			m_nScoreP5=3.5;
		}
		if(m_ComboP5.GetCurSel()==3)
		{
			m_nScoreP5=3.0;
		}
		if(m_ComboP5.GetCurSel()==4)
		{
			m_nScoreP5=2.5;
		}
		if(m_ComboP5.GetCurSel()==5)
		{
			m_nScoreP5=2.0;
		}
		if(m_ComboP5.GetCurSel()==6)
		{
			m_nScoreP5=1.5;
		}
		if(m_ComboP5.GetCurSel()==7)
		{
			m_nScoreP5=1.0;
		}
		if(m_ComboP5.GetCurSel()==8)
		{
			m_nScoreP5=0;
		}
	}
}


//void CProject2Dlg::OnSelchangeComboP6()
//{
//	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
//}


void CProject2Dlg::OnSelchangeComboP6()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckP6.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboP6.GetCurSel()==0)
		{
			m_nScoreP6=4.5;
		}
		if(m_ComboP6.GetCurSel()==1)
		{
			m_nScoreP6=4.0;
		}
		if(m_ComboP6.GetCurSel()==2)
		{
			m_nScoreP6=3.5;
		}
		if(m_ComboP6.GetCurSel()==3)
		{
			m_nScoreP6=3.0;
		}
		if(m_ComboP6.GetCurSel()==4)
		{
			m_nScoreP6=2.5;
		}
		if(m_ComboP6.GetCurSel()==5)
		{
			m_nScoreP6=2.0;
		}
		if(m_ComboP6.GetCurSel()==6)
		{
			m_nScoreP6=1.5;
		}
		if(m_ComboP6.GetCurSel()==7)
		{
			m_nScoreP6=1.0;
		}
		if(m_ComboP6.GetCurSel()==8)
		{
			m_nScoreP6=0;
		}
	}
}



void CProject2Dlg::OnSelchangeComboS1()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS1.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS1.GetCurSel()==0)
		{
			m_nScoreS1=4.5;
		}
		if(m_ComboS1.GetCurSel()==1)
		{
			m_nScoreS1=4.0;
		}
		if(m_ComboS1.GetCurSel()==2)
		{
			m_nScoreS1=3.5;
		}
		if(m_ComboS1.GetCurSel()==3)
		{
			m_nScoreS1=3.0;
		}
		if(m_ComboS1.GetCurSel()==4)
		{
			m_nScoreS1=2.5;
		}
		if(m_ComboS1.GetCurSel()==5)
		{
			m_nScoreS1=2.0;
		}
		if(m_ComboS1.GetCurSel()==6)
		{
			m_nScoreS1=1.5;
		}
		if(m_ComboS1.GetCurSel()==7)
		{
			m_nScoreS1=1.0;
		}
		if(m_ComboS1.GetCurSel()==8)
		{
			m_nScoreS1=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS2()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS2.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS2.GetCurSel()==0)
		{
			m_nScoreS2=4.5;
		}
		if(m_ComboS2.GetCurSel()==1)
		{
			m_nScoreS2=4.0;
		}
		if(m_ComboS2.GetCurSel()==2)
		{
			m_nScoreS2=3.5;
		}
		if(m_ComboS2.GetCurSel()==3)
		{
			m_nScoreS2=3.0;
		}
		if(m_ComboS2.GetCurSel()==4)
		{
			m_nScoreS2=2.5;
		}
		if(m_ComboS2.GetCurSel()==5)
		{
			m_nScoreS2=2.0;
		}
		if(m_ComboS2.GetCurSel()==6)
		{
			m_nScoreS2=1.5;
		}
		if(m_ComboS2.GetCurSel()==7)
		{
			m_nScoreS2=1.0;
		}
		if(m_ComboS2.GetCurSel()==8)
		{
			m_nScoreS2=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS3.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS3.GetCurSel()==0)
		{
			m_nScoreS3=4.5;
		}
		if(m_ComboS3.GetCurSel()==1)
		{
			m_nScoreS3=4.0;
		}
		if(m_ComboS3.GetCurSel()==2)
		{
			m_nScoreS3=3.5;
		}
		if(m_ComboS3.GetCurSel()==3)
		{
			m_nScoreS3=3.0;
		}
		if(m_ComboS3.GetCurSel()==4)
		{
			m_nScoreS3=2.5;
		}
		if(m_ComboS3.GetCurSel()==5)
		{
			m_nScoreS3=2.0;
		}
		if(m_ComboS3.GetCurSel()==6)
		{
			m_nScoreS3=1.5;
		}
		if(m_ComboS3.GetCurSel()==7)
		{
			m_nScoreS3=1.0;
		}
		if(m_ComboS3.GetCurSel()==8)
		{
			m_nScoreS3=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS4()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS4.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS4.GetCurSel()==0)
		{
			m_nScoreS4=4.5;
		}
		if(m_ComboS4.GetCurSel()==1)
		{
			m_nScoreS4=4.0;
		}
		if(m_ComboS4.GetCurSel()==2)
		{
			m_nScoreS4=3.5;
		}
		if(m_ComboS4.GetCurSel()==3)
		{
			m_nScoreS4=3.0;
		}
		if(m_ComboS4.GetCurSel()==4)
		{
			m_nScoreS4=2.5;
		}
		if(m_ComboS4.GetCurSel()==5)
		{
			m_nScoreS4=2.0;
		}
		if(m_ComboS4.GetCurSel()==6)
		{
			m_nScoreS4=1.5;
		}
		if(m_ComboS4.GetCurSel()==7)
		{
			m_nScoreS4=1.0;
		}
		if(m_ComboS4.GetCurSel()==8)
		{
			m_nScoreS4=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS5()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS5.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS5.GetCurSel()==0)
		{
			m_nScoreS5=4.5;
		}
		if(m_ComboS5.GetCurSel()==1)
		{
			m_nScoreS5=4.0;
		}
		if(m_ComboS5.GetCurSel()==2)
		{
			m_nScoreS5=3.5;
		}
		if(m_ComboS5.GetCurSel()==3)
		{
			m_nScoreS5=3.0;
		}
		if(m_ComboS5.GetCurSel()==4)
		{
			m_nScoreS5=2.5;
		}
		if(m_ComboS5.GetCurSel()==5)
		{
			m_nScoreS5=2.0;
		}
		if(m_ComboS5.GetCurSel()==6)
		{
			m_nScoreS5=1.5;
		}
		if(m_ComboS5.GetCurSel()==7)
		{
			m_nScoreS5=1.0;
		}
		if(m_ComboS5.GetCurSel()==8)
		{
			m_nScoreS5=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS6()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS6.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS6.GetCurSel()==0)
		{
			m_nScoreS6=4.5;
		}
		if(m_ComboS6.GetCurSel()==1)
		{
			m_nScoreS6=4.0;
		}
		if(m_ComboS6.GetCurSel()==2)
		{
			m_nScoreS6=3.5;
		}
		if(m_ComboS6.GetCurSel()==3)
		{
			m_nScoreS6=3.0;
		}
		if(m_ComboS6.GetCurSel()==4)
		{
			m_nScoreS6=2.5;
		}
		if(m_ComboS6.GetCurSel()==5)
		{
			m_nScoreS6=2.0;
		}
		if(m_ComboS6.GetCurSel()==6)
		{
			m_nScoreS6=1.5;
		}
		if(m_ComboS6.GetCurSel()==7)
		{
			m_nScoreS6=1.0;
		}
		if(m_ComboS6.GetCurSel()==8)
		{
			m_nScoreS6=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS7()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS7.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS7.GetCurSel()==0)
		{
			m_nScoreS7=4.5;
		}
		if(m_ComboS7.GetCurSel()==1)
		{
			m_nScoreS7=4.0;
		}
		if(m_ComboS7.GetCurSel()==2)
		{
			m_nScoreS7=3.5;
		}
		if(m_ComboS7.GetCurSel()==3)
		{
			m_nScoreS7=3.0;
		}
		if(m_ComboS7.GetCurSel()==4)
		{
			m_nScoreS7=2.5;
		}
		if(m_ComboS7.GetCurSel()==5)
		{
			m_nScoreS7=2.0;
		}
		if(m_ComboS7.GetCurSel()==6)
		{
			m_nScoreS7=1.5;
		}
		if(m_ComboS7.GetCurSel()==7)
		{
			m_nScoreS7=1.0;
		}
		if(m_ComboS7.GetCurSel()==8)
		{
			m_nScoreS7=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS8()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS8.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS8.GetCurSel()==0)
		{
			m_nScoreS8=4.5;
		}
		if(m_ComboS8.GetCurSel()==1)
		{
			m_nScoreS8=4.0;
		}
		if(m_ComboS8.GetCurSel()==2)
		{
			m_nScoreS8=3.5;
		}
		if(m_ComboS8.GetCurSel()==3)
		{
			m_nScoreS8=3.0;
		}
		if(m_ComboS8.GetCurSel()==4)
		{
			m_nScoreS8=2.5;
		}
		if(m_ComboS8.GetCurSel()==5)
		{
			m_nScoreS8=2.0;
		}
		if(m_ComboS8.GetCurSel()==6)
		{
			m_nScoreS8=1.5;
		}
		if(m_ComboS8.GetCurSel()==7)
		{
			m_nScoreS8=1.0;
		}
		if(m_ComboS8.GetCurSel()==8)
		{
			m_nScoreS8=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS9()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS9.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS9.GetCurSel()==0)
		{
			m_nScoreS9=4.5;
		}
		if(m_ComboS9.GetCurSel()==1)
		{
			m_nScoreS9=4.0;
		}
		if(m_ComboS9.GetCurSel()==2)
		{
			m_nScoreS9=3.5;
		}
		if(m_ComboS9.GetCurSel()==3)
		{
			m_nScoreS9=3.0;
		}
		if(m_ComboS9.GetCurSel()==4)
		{
			m_nScoreS9=2.5;
		}
		if(m_ComboS9.GetCurSel()==5)
		{
			m_nScoreS9=2.0;
		}
		if(m_ComboS9.GetCurSel()==6)
		{
			m_nScoreS9=1.5;
		}
		if(m_ComboS9.GetCurSel()==7)
		{
			m_nScoreS9=1.0;
		}
		if(m_ComboS9.GetCurSel()==8)
		{
			m_nScoreS9=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS10()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS10.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS10.GetCurSel()==0)
		{
			m_nScoreS10=4.5;
		}
		if(m_ComboS10.GetCurSel()==1)
		{
			m_nScoreS10=4.0;
		}
		if(m_ComboS10.GetCurSel()==2)
		{
			m_nScoreS10=3.5;
		}
		if(m_ComboS10.GetCurSel()==3)
		{
			m_nScoreS10=3.0;
		}
		if(m_ComboS10.GetCurSel()==4)
		{
			m_nScoreS10=2.5;
		}
		if(m_ComboS10.GetCurSel()==5)
		{
			m_nScoreS10=2.0;
		}
		if(m_ComboS10.GetCurSel()==6)
		{
			m_nScoreS10=1.5;
		}
		if(m_ComboS10.GetCurSel()==7)
		{
			m_nScoreS10=1.0;
		}
		if(m_ComboS10.GetCurSel()==8)
		{
			m_nScoreS10=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS11()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS11.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS11.GetCurSel()==0)
		{
			m_nScoreS11=4.5;
		}
		if(m_ComboS11.GetCurSel()==1)
		{
			m_nScoreS11=4.0;
		}
		if(m_ComboS11.GetCurSel()==2)
		{
			m_nScoreS11=3.5;
		}
		if(m_ComboS11.GetCurSel()==3)
		{
			m_nScoreS11=3.0;
		}
		if(m_ComboS11.GetCurSel()==4)
		{
			m_nScoreS11=2.5;
		}
		if(m_ComboS11.GetCurSel()==5)
		{
			m_nScoreS11=2.0;
		}
		if(m_ComboS11.GetCurSel()==6)
		{
			m_nScoreS11=1.5;
		}
		if(m_ComboS11.GetCurSel()==7)
		{
			m_nScoreS11=1.0;
		}
		if(m_ComboS11.GetCurSel()==8)
		{
			m_nScoreS11=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS12()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS12.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS12.GetCurSel()==0)
		{
			m_nScoreS12=4.5;
		}
		if(m_ComboS12.GetCurSel()==1)
		{
			m_nScoreS12=4.0;
		}
		if(m_ComboS12.GetCurSel()==2)
		{
			m_nScoreS12=3.5;
		}
		if(m_ComboS12.GetCurSel()==3)
		{
			m_nScoreS12=3.0;
		}
		if(m_ComboS12.GetCurSel()==4)
		{
			m_nScoreS12=2.5;
		}
		if(m_ComboS12.GetCurSel()==5)
		{
			m_nScoreS12=2.0;
		}
		if(m_ComboS12.GetCurSel()==6)
		{
			m_nScoreS12=1.5;
		}
		if(m_ComboS12.GetCurSel()==7)
		{
			m_nScoreS12=1.0;
		}
		if(m_ComboS12.GetCurSel()==8)
		{
			m_nScoreS12=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS13()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS13.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS13.GetCurSel()==0)
		{
			m_nScoreS13=4.5;
		}
		if(m_ComboS13.GetCurSel()==1)
		{
			m_nScoreS13=4.0;
		}
		if(m_ComboS13.GetCurSel()==2)
		{
			m_nScoreS13=3.5;
		}
		if(m_ComboS13.GetCurSel()==3)
		{
			m_nScoreS13=3.0;
		}
		if(m_ComboS13.GetCurSel()==4)
		{
			m_nScoreS13=2.5;
		}
		if(m_ComboS13.GetCurSel()==5)
		{
			m_nScoreS13=2.0;
		}
		if(m_ComboS13.GetCurSel()==6)
		{
			m_nScoreS13=1.5;
		}
		if(m_ComboS13.GetCurSel()==7)
		{
			m_nScoreS13=1.0;
		}
		if(m_ComboS13.GetCurSel()==8)
		{
			m_nScoreS13=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS14()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS14.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS14.GetCurSel()==0)
		{
			m_nScoreS14=4.5;
		}
		if(m_ComboS14.GetCurSel()==1)
		{
			m_nScoreS14=4.0;
		}
		if(m_ComboS14.GetCurSel()==2)
		{
			m_nScoreS14=3.5;
		}
		if(m_ComboS14.GetCurSel()==3)
		{
			m_nScoreS14=3.0;
		}
		if(m_ComboS14.GetCurSel()==4)
		{
			m_nScoreS14=2.5;
		}
		if(m_ComboS14.GetCurSel()==5)
		{
			m_nScoreS14=2.0;
		}
		if(m_ComboS14.GetCurSel()==6)
		{
			m_nScoreS14=1.5;
		}
		if(m_ComboS14.GetCurSel()==7)
		{
			m_nScoreS14=1.0;
		}
		if(m_ComboS14.GetCurSel()==8)
		{
			m_nScoreS14=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS15()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS15.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS15.GetCurSel()==0)
		{
			m_nScoreS15=4.5;
		}
		if(m_ComboS15.GetCurSel()==1)
		{
			m_nScoreS15=4.0;
		}
		if(m_ComboS15.GetCurSel()==2)
		{
			m_nScoreS15=3.5;
		}
		if(m_ComboS15.GetCurSel()==3)
		{
			m_nScoreS15=3.0;
		}
		if(m_ComboS15.GetCurSel()==4)
		{
			m_nScoreS15=2.5;
		}
		if(m_ComboS15.GetCurSel()==5)
		{
			m_nScoreS15=2.0;
		}
		if(m_ComboS15.GetCurSel()==6)
		{
			m_nScoreS15=1.5;
		}
		if(m_ComboS15.GetCurSel()==7)
		{
			m_nScoreS15=1.0;
		}
		if(m_ComboS15.GetCurSel()==8)
		{
			m_nScoreS15=0;
		}
	}
}



void CProject2Dlg::OnSelchangeComboS16()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS16.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS16.GetCurSel()==0)
		{
			m_nScoreS16=4.5;
		}
		if(m_ComboS16.GetCurSel()==1)
		{
			m_nScoreS16=4.0;
		}
		if(m_ComboS16.GetCurSel()==2)
		{
			m_nScoreS16=3.5;
		}
		if(m_ComboS16.GetCurSel()==3)
		{
			m_nScoreS16=3.0;
		}
		if(m_ComboS16.GetCurSel()==4)
		{
			m_nScoreS16=2.5;
		}
		if(m_ComboS16.GetCurSel()==5)
		{
			m_nScoreS16=2.0;
		}
		if(m_ComboS16.GetCurSel()==6)
		{
			m_nScoreS16=1.5;
		}
		if(m_ComboS16.GetCurSel()==7)
		{
			m_nScoreS16=1.0;
		}
		if(m_ComboS16.GetCurSel()==8)
		{
			m_nScoreS16=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS17()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS17.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS17.GetCurSel()==0)
		{
			m_nScoreS17=4.5;
		}
		if(m_ComboS17.GetCurSel()==1)
		{
			m_nScoreS17=4.0;
		}
		if(m_ComboS17.GetCurSel()==2)
		{
			m_nScoreS17=3.5;
		}
		if(m_ComboS17.GetCurSel()==3)
		{
			m_nScoreS17=3.0;
		}
		if(m_ComboS17.GetCurSel()==4)
		{
			m_nScoreS17=2.5;
		}
		if(m_ComboS17.GetCurSel()==5)
		{
			m_nScoreS17=2.0;
		}
		if(m_ComboS17.GetCurSel()==6)
		{
			m_nScoreS17=1.5;
		}
		if(m_ComboS17.GetCurSel()==7)
		{
			m_nScoreS17=1.0;
		}
		if(m_ComboS17.GetCurSel()==8)
		{
			m_nScoreS17=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS18()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS18.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS18.GetCurSel()==0)
		{
			m_nScoreS18=4.5;
		}
		if(m_ComboS18.GetCurSel()==1)
		{
			m_nScoreS18=4.0;
		}
		if(m_ComboS18.GetCurSel()==2)
		{
			m_nScoreS18=3.5;
		}
		if(m_ComboS18.GetCurSel()==3)
		{
			m_nScoreS18=3.0;
		}
		if(m_ComboS18.GetCurSel()==4)
		{
			m_nScoreS18=2.5;
		}
		if(m_ComboS18.GetCurSel()==5)
		{
			m_nScoreS18=2.0;
		}
		if(m_ComboS18.GetCurSel()==6)
		{
			m_nScoreS18=1.5;
		}
		if(m_ComboS18.GetCurSel()==7)
		{
			m_nScoreS18=1.0;
		}
		if(m_ComboS1.GetCurSel()==8)
		{
			m_nScoreS1=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS19()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS19.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS19.GetCurSel()==0)
		{
			m_nScoreS19=4.5;
		}
		if(m_ComboS19.GetCurSel()==1)
		{
			m_nScoreS19=4.0;
		}
		if(m_ComboS19.GetCurSel()==2)
		{
			m_nScoreS19=3.5;
		}
		if(m_ComboS19.GetCurSel()==3)
		{
			m_nScoreS19=3.0;
		}
		if(m_ComboS19.GetCurSel()==4)
		{
			m_nScoreS19=2.5;
		}
		if(m_ComboS19.GetCurSel()==5)
		{
			m_nScoreS19=2.0;
		}
		if(m_ComboS19.GetCurSel()==6)
		{
			m_nScoreS19=1.5;
		}
		if(m_ComboS19.GetCurSel()==7)
		{
			m_nScoreS19=1.0;
		}
		if(m_ComboS19.GetCurSel()==8)
		{
			m_nScoreS19=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS20()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS20.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS20.GetCurSel()==0)
		{
			m_nScoreS20=4.5;
		}
		if(m_ComboS20.GetCurSel()==1)
		{
			m_nScoreS20=4.0;
		}
		if(m_ComboS20.GetCurSel()==2)
		{
			m_nScoreS20=3.5;
		}
		if(m_ComboS20.GetCurSel()==3)
		{
			m_nScoreS20=3.0;
		}
		if(m_ComboS20.GetCurSel()==4)
		{
			m_nScoreS20=2.5;
		}
		if(m_ComboS20.GetCurSel()==5)
		{
			m_nScoreS20=2.0;
		}
		if(m_ComboS20.GetCurSel()==6)
		{
			m_nScoreS20=1.5;
		}
		if(m_ComboS20.GetCurSel()==7)
		{
			m_nScoreS20=1.0;
		}
		if(m_ComboS20.GetCurSel()==8)
		{
			m_nScoreS20=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS21()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS21.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS21.GetCurSel()==0)
		{
			m_nScoreS21=4.5;
		}
		if(m_ComboS21.GetCurSel()==1)
		{
			m_nScoreS21=4.0;
		}
		if(m_ComboS21.GetCurSel()==2)
		{
			m_nScoreS21=3.5;
		}
		if(m_ComboS21.GetCurSel()==3)
		{
			m_nScoreS21=3.0;
		}
		if(m_ComboS21.GetCurSel()==4)
		{
			m_nScoreS21=2.5;
		}
		if(m_ComboS21.GetCurSel()==5)
		{
			m_nScoreS21=2.0;
		}
		if(m_ComboS21.GetCurSel()==6)
		{
			m_nScoreS21=1.5;
		}
		if(m_ComboS21.GetCurSel()==7)
		{
			m_nScoreS21=1.0;
		}
		if(m_ComboS21.GetCurSel()==8)
		{
			m_nScoreS21=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS22()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS22.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS22.GetCurSel()==0)
		{
			m_nScoreS22=4.5;
		}
		if(m_ComboS22.GetCurSel()==1)
		{
			m_nScoreS22=4.0;
		}
		if(m_ComboS22.GetCurSel()==2)
		{
			m_nScoreS22=3.5;
		}
		if(m_ComboS22.GetCurSel()==3)
		{
			m_nScoreS22=3.0;
		}
		if(m_ComboS22.GetCurSel()==4)
		{
			m_nScoreS22=2.5;
		}
		if(m_ComboS22.GetCurSel()==5)
		{
			m_nScoreS22=2.0;
		}
		if(m_ComboS22.GetCurSel()==6)
		{
			m_nScoreS22=1.5;
		}
		if(m_ComboS22.GetCurSel()==7)
		{
			m_nScoreS22=1.0;
		}
		if(m_ComboS22.GetCurSel()==8)
		{
			m_nScoreS22=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS23()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS23.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS23.GetCurSel()==0)
		{
			m_nScoreS23=4.5;
		}
		if(m_ComboS23.GetCurSel()==1)
		{
			m_nScoreS23=4.0;
		}
		if(m_ComboS23.GetCurSel()==2)
		{
			m_nScoreS23=3.5;
		}
		if(m_ComboS23.GetCurSel()==3)
		{
			m_nScoreS23=3.0;
		}
		if(m_ComboS23.GetCurSel()==4)
		{
			m_nScoreS23=2.5;
		}
		if(m_ComboS23.GetCurSel()==5)
		{
			m_nScoreS23=2.0;
		}
		if(m_ComboS23.GetCurSel()==6)
		{
			m_nScoreS23=1.5;
		}
		if(m_ComboS23.GetCurSel()==7)
		{
			m_nScoreS23=1.0;
		}
		if(m_ComboS23.GetCurSel()==8)
		{
			m_nScoreS23=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS24()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS24.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS24.GetCurSel()==0)
		{
			m_nScoreS24=4.5;
		}
		if(m_ComboS24.GetCurSel()==1)
		{
			m_nScoreS24=4.0;
		}
		if(m_ComboS24.GetCurSel()==2)
		{
			m_nScoreS24=3.5;
		}
		if(m_ComboS24.GetCurSel()==3)
		{
			m_nScoreS24=3.0;
		}
		if(m_ComboS24.GetCurSel()==4)
		{
			m_nScoreS24=2.5;
		}
		if(m_ComboS24.GetCurSel()==5)
		{
			m_nScoreS24=2.0;
		}
		if(m_ComboS24.GetCurSel()==6)
		{
			m_nScoreS24=1.5;
		}
		if(m_ComboS24.GetCurSel()==7)
		{
			m_nScoreS24=1.0;
		}
		if(m_ComboS24.GetCurSel()==8)
		{
			m_nScoreS24=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS25()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS25.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS25.GetCurSel()==0)
		{
			m_nScoreS25=4.5;
		}
		if(m_ComboS25.GetCurSel()==1)
		{
			m_nScoreS25=4.0;
		}
		if(m_ComboS25.GetCurSel()==2)
		{
			m_nScoreS25=3.5;
		}
		if(m_ComboS25.GetCurSel()==3)
		{
			m_nScoreS25=3.0;
		}
		if(m_ComboS25.GetCurSel()==4)
		{
			m_nScoreS25=2.5;
		}
		if(m_ComboS25.GetCurSel()==5)
		{
			m_nScoreS25=2.0;
		}
		if(m_ComboS25.GetCurSel()==6)
		{
			m_nScoreS25=1.5;
		}
		if(m_ComboS25.GetCurSel()==7)
		{
			m_nScoreS25=1.0;
		}
		if(m_ComboS25.GetCurSel()==8)
		{
			m_nScoreS25=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS26()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS26.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS26.GetCurSel()==0)
		{
			m_nScoreS26=4.5;
		}
		if(m_ComboS26.GetCurSel()==1)
		{
			m_nScoreS26=4.0;
		}
		if(m_ComboS26.GetCurSel()==2)
		{
			m_nScoreS26=3.5;
		}
		if(m_ComboS26.GetCurSel()==3)
		{
			m_nScoreS26=3.0;
		}
		if(m_ComboS26.GetCurSel()==4)
		{
			m_nScoreS26=2.5;
		}
		if(m_ComboS26.GetCurSel()==5)
		{
			m_nScoreS26=2.0;
		}
		if(m_ComboS26.GetCurSel()==6)
		{
			m_nScoreS26=1.5;
		}
		if(m_ComboS26.GetCurSel()==7)
		{
			m_nScoreS26=1.0;
		}
		if(m_ComboS26.GetCurSel()==8)
		{
			m_nScoreS26=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS27()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS27.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS27.GetCurSel()==0)
		{
			m_nScoreS27=4.5;
		}
		if(m_ComboS27.GetCurSel()==1)
		{
			m_nScoreS27=4.0;
		}
		if(m_ComboS27.GetCurSel()==2)
		{
			m_nScoreS27=3.5;
		}
		if(m_ComboS27.GetCurSel()==3)
		{
			m_nScoreS27=3.0;
		}
		if(m_ComboS27.GetCurSel()==4)
		{
			m_nScoreS27=2.5;
		}
		if(m_ComboS27.GetCurSel()==5)
		{
			m_nScoreS27=2.0;
		}
		if(m_ComboS27.GetCurSel()==6)
		{
			m_nScoreS27=1.5;
		}
		if(m_ComboS27.GetCurSel()==7)
		{
			m_nScoreS27=1.0;
		}
		if(m_ComboS27.GetCurSel()==8)
		{
			m_nScoreS27=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS28()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS28.GetCheck()==0)
	{
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
	}

	else
	{
		if(m_ComboS28.GetCurSel()==0)
		{
			m_nScoreS28=4.5;
		}
		if(m_ComboS28.GetCurSel()==1)
		{
			m_nScoreS28=4.0;
		}
		if(m_ComboS28.GetCurSel()==2)
		{
			m_nScoreS28=3.5;
		}
		if(m_ComboS28.GetCurSel()==3)
		{
			m_nScoreS28=3.0;
		}
		if(m_ComboS28.GetCurSel()==4)
		{
			m_nScoreS28=2.5;
		}
		if(m_ComboS28.GetCurSel()==5)
		{
			m_nScoreS28=2.0;
		}
		if(m_ComboS28.GetCurSel()==6)
		{
			m_nScoreS28=1.5;
		}
		if(m_ComboS28.GetCurSel()==7)
		{
			m_nScoreS28=1.0;
		}
		if(m_ComboS28.GetCurSel()==8)
		{
			m_nScoreS28=0;
		}
	}
}


void CProject2Dlg::OnSelchangeComboS29()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS29.GetCheck()==0)
	{
		//m_ComboS29.Clear();
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
		//m_ComboS29.Clear();
		
		
	}
	
	else
	{
		if(m_ComboS29.GetCurSel()==0)
		{
			m_nScoreS29=4.5;
		}
		if(m_ComboS29.GetCurSel()==1)
		{
			m_nScoreS29=4.0;
		}
		if(m_ComboS29.GetCurSel()==2)
		{
			m_nScoreS29=3.5;
		}
		if(m_ComboS29.GetCurSel()==3)
		{
			m_nScoreS29=3.0;
		}
		if(m_ComboS29.GetCurSel()==4)
		{
			m_nScoreS29=2.5;
		}
		if(m_ComboS29.GetCurSel()==5)
		{
			m_nScoreS29=2.0;
		}
		if(m_ComboS29.GetCurSel()==6)
		{
			m_nScoreS29=1.5;
		}
		if(m_ComboS29.GetCurSel()==7)
		{
			m_nScoreS29=1.0;
		}
		if(m_ComboS29.GetCurSel()==8)
		{
			m_nScoreS29=0;
		}
		m_ComboS29.Clear();
	}
}

void CProject2Dlg::OnRadioDeepmajor()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nMajorDeepOrOther=1;
}

void CProject2Dlg::OnRadioOthermajor()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nMajorDeepOrOther=2;
}

void CProject2Dlg::OnClickedButtonCalc()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_nCountP = m_CheckP1.GetCheck() + m_CheckP2.GetCheck() + m_CheckP3.GetCheck() + m_CheckP4.GetCheck() + m_CheckP5.GetCheck() + m_CheckP6.GetCheck();
	m_nPLeave = 3*(6 - m_nCountP);
	m_nCountS = m_CheckS1.GetCheck() + m_CheckS2.GetCheck() + m_CheckS3.GetCheck()	+ m_CheckS4.GetCheck() + m_CheckS5.GetCheck() + m_CheckS6.GetCheck() 
				+ m_CheckS7.GetCheck() + m_CheckS8.GetCheck() + m_CheckS9.GetCheck() + m_CheckS10.GetCheck() + m_CheckS11.GetCheck() + m_CheckS12.GetCheck() 
				+ m_CheckS13.GetCheck() + m_CheckS14.GetCheck() + m_CheckS15.GetCheck()	+ m_CheckS16.GetCheck() + m_CheckS17.GetCheck() + m_CheckS18.GetCheck()
				+ m_CheckS19.GetCheck() + m_CheckS20.GetCheck() + m_CheckS21.GetCheck()	+ m_CheckS22.GetCheck() + m_CheckS23.GetCheck() + m_CheckS24.GetCheck()
				+ m_CheckS25.GetCheck() + m_CheckS26.GetCheck() + m_CheckS27.GetCheck()	+ m_CheckS28.GetCheck() + m_CheckS29.GetCheck() + m_CheckS30.GetCheck();
	if(m_nMajorDeepOrOther==1)
	{
		m_nSLeave = 3*(15-m_nCountS);
		if(m_nCountS>=15) m_nSLeave=0;
	}
	else if(m_nMajorDeepOrOther==2)
	{
		m_nSLeave = 3*(8-m_nCountS);
		if(m_nCountS>=8) m_nSLeave=0;
	}
	

	m_nPScore = m_nScoreP1 + m_nScoreP2 + m_nScoreP3 + m_nScoreP4 + m_nScoreP5 + m_nScoreP6;
	m_nSScore = m_nScoreS1 + m_nScoreS2 + m_nScoreS3 + m_nScoreS4 + m_nScoreS5 + m_nScoreS6 + m_nScoreS7 + m_nScoreS8 + m_nScoreS9 + m_nScoreS10 + m_nScoreS11
				+ m_nScoreS12 + m_nScoreS13 + m_nScoreS14 + m_nScoreS15 + m_nScoreS16 + m_nScoreS17 + m_nScoreS18 + m_nScoreS19 + m_nScoreS20 + m_nScoreS21
				+ m_nScoreS22 + m_nScoreS23 + m_nScoreS24 + m_nScoreS25 + m_nScoreS26 + m_nScoreS27 + m_nScoreS28 + m_nScoreS29 + m_nScoreS30;
	m_nPreScore = (m_nPScore + m_nSScore) / (m_nCountP + m_nCountS);

	CString str1;
	str1.Format(_T("%g"), m_nPreScore);
	SetDlgItemText(IDC_EDIT_PRESCORE, str1);

	CString str2;
	str2.Format(_T("%d"), m_nPLeave);
	SetDlgItemText(IDC_EDIT_PLEAVE, str2);

	CString str3;
	str3.Format(_T("%d"), m_nSLeave);
	SetDlgItemText(IDC_EDIT_SLEAVE, str3);



	if(m_CheckP1.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�ڷᱸ��*"));
	}
	if(m_CheckP2.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��ǻ�ͱ���*"));
	}
	if(m_CheckP3.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�˰���*"));
	}
	if(m_CheckP4.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�ü��*"));
	}
	if(m_CheckP5.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("���α׷��־���*"));
	}
	if(m_CheckP6.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("����Ʈ�������*"));
	}
	if(m_CheckS1.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("â�������м����Թ�"));
	}
	if(m_CheckS2.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��ǻ�Ͱ����ѷ�"));
	}
	if(m_CheckS3.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("C++���α׷���"));
	}
	if(m_CheckS4.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�̻����"));
	}
	if(m_CheckS5.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("JAVA���α׷���"));
	}
	if(m_CheckS6.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����������α׷���"));
	}
	if(m_CheckS7.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("���������"));
	}
	if(m_CheckS8.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("���н��ý������α׷���"));
	}
	if(m_CheckS9.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("���α׷��Ǳ������ؼ�"));
	}
	if(m_CheckS10.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("���������"));
	}
	if(m_CheckS11.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("����ũ�����μ������뼳��"));
	}
	if(m_CheckS12.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����Ϸ�"));
	}
	if(m_CheckS13.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����ͺ��̽�"));
	}
	if(m_CheckS14.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����нý��ۼ���"));
	}
	if(m_CheckS15.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��������α׷���"));
	}
	if(m_CheckS16.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��ǻ�ͱ׷��Ƚ�"));
	}
	if(m_CheckS17.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��ǻ�ͳ�Ʈ��ũ"));
	}
	if(m_CheckS18.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("Ȯ�������"));
	}
	if(m_CheckS19.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("����Ʈ�����������Ʈ"));
	}
	if(m_CheckS20.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��ġ�ؼ�"));
	}
	if(m_CheckS21.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("����ó��"));
	}
	if(m_CheckS22.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����α׷���"));
	}
	if(m_CheckS23.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�Ӻ������ǻ��"));
	}
	if(m_CheckS24.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("��Ƽ�̵������"));
	}
	if(m_CheckS25.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�л���ǻ��"));
	}
	if(m_CheckS26.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�ΰ�����"));
	}
	if(m_CheckS27.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("�����˻�"));
	}
	if(m_CheckS28.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("������ȣ"));
	}
	if(m_CheckS29.GetCheck()==0) 
	{
		m_ListAble.AddString(_T("����н�"));
	}
}







void CProject2Dlg::OnSelchangeComboMove()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	int index=m_cbMove.GetCurSel();
	if(index!=CB_ERR){
		CString str;

		m_cbMove.GetLBText(m_cbMove.GetCurSel(), str);
		SetDlgItemText(IDC_COMBO_MOVE, str);

	if(str=="---->")
	{
		int nCnt = m_ListAble.GetCurSel();
		if(nCnt==LB_ERR)
		{
			AfxMessageBox(_T("���� ����Ʈ �ڽ����� �̵��� �������� �����ϼ���."), MB_OK|MB_ICONWARNING);
		}
		else
		{
		CString str1;
		m_ListAble.GetText(nCnt, str1);
		

		m_ListWill.AddString(str1);
		m_ListAble.SetCurSel(nCnt);
		}
	}
	if(str=="<----")
	{
		int nCnt = m_ListWill.GetCurSel();
		if(nCnt==LB_ERR)
		{
			AfxMessageBox(_T("������ ����Ʈ �ڽ����� �̵��� �������� �����ϼ���."), MB_OK|MB_ICONWARNING);
		}
		else
		{
		CString str1;
		m_ListWill.GetText(nCnt, str1);
		m_ListWill.DeleteString(nCnt);

		
		m_ListWill.SetCurSel(nCnt);
		}
	}
	}
}


void CProject2Dlg::OnClickedButtonSol()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString str;
	GetDlgItemText(IDC_EDIT_GOALSCORE, str);

	m_dGoalscore = _wtof(str);
	if(m_nMajorDeepOrOther==1)
	{
		m_dLeavescore=(m_dGoalscore*21 - (m_nPScore+m_nSScore))/ (double) ((m_nPLeave+m_nSLeave)/3.0);				
	}
	else if(m_nMajorDeepOrOther==2)
	{
		m_dLeavescore=(m_dGoalscore*14 - (m_nPScore+m_nSScore))/ (double) ((m_nPLeave+m_nSLeave)/3.0);
	}

	if(m_dLeavescore>4.5)
	{
		m_dLeavescore=4.5;
	}


	if(m_CheckS4.GetCheck()+m_CheckS7.GetCheck()+m_CheckS18.GetCheck()+m_CheckS20.GetCheck()==0)
	{
		m_dSubjectPart1=0.0;
		m_listBestPart[0]=m_dSubjectPart1;

	}
	else
	{
		m_dSubjectPart1= (m_nScoreS4+m_nScoreS7+m_nScoreS18+m_nScoreS20) / (m_CheckS4.GetCheck()+m_CheckS7.GetCheck()+m_CheckS18.GetCheck()+m_CheckS20.GetCheck());
		m_listBestPart[0]=floor(100.*(m_dSubjectPart1 + 0.005))/100;
	}

	if(m_CheckS3.GetCheck()+m_CheckS5.GetCheck()+m_CheckS6.GetCheck()+m_CheckP3.GetCheck()+m_CheckS8.GetCheck()+m_CheckS15.GetCheck()+m_CheckS22.GetCheck()==0)
	{
		m_dSubjectPart2=0.0;
		m_listBestPart[1]=m_dSubjectPart2;
	}
	else
	{
		m_dSubjectPart2= (m_nScoreS3+m_nScoreS5+m_nScoreS6+m_nScoreP3+m_nScoreS8+m_nScoreS15+m_nScoreS22) / (m_CheckS3.GetCheck()+m_CheckS5.GetCheck()+m_CheckS6.GetCheck()+m_CheckP3.GetCheck()+m_CheckS8.GetCheck()+m_CheckS15.GetCheck()+m_CheckS22.GetCheck());
		m_listBestPart[1]=floor(100.*(m_dSubjectPart2 + 0.005))/100;
	}
	
	if(m_CheckS1.GetCheck()+m_CheckS11.GetCheck()+m_CheckS14.GetCheck()+m_CheckS19.GetCheck()+m_CheckS24.GetCheck()==0)
	{
		m_dSubjectPart3=0.0;
		m_listBestPart[2]=m_dSubjectPart3;
	}
	else
	{
		m_dSubjectPart3= (m_nScoreS1+m_nScoreS11+m_nScoreS14+m_nScoreS19+m_nScoreS24) / (m_CheckS1.GetCheck()+m_CheckS11.GetCheck()+m_CheckS14.GetCheck()+m_CheckS19.GetCheck()+m_CheckS24.GetCheck());
		m_listBestPart[2]=floor(100.*(m_dSubjectPart3 + 0.005))/100;
	}
	
	if(m_CheckS2.GetCheck()+m_CheckP2.GetCheck()+m_CheckS9.GetCheck()+m_CheckS30.GetCheck()+m_CheckP4.GetCheck()==0)
	{
		m_dSubjectPart4=0.0;
		m_listBestPart[3]=m_dSubjectPart4;
	}
	else
	{
		m_dSubjectPart4= (m_nScoreS2+m_nScoreP2+m_nScoreS9+m_nScoreS30+m_nScoreP4) / (m_CheckS2.GetCheck()+m_CheckP2.GetCheck()+m_CheckS9.GetCheck()+m_CheckS30.GetCheck()+m_CheckP4.GetCheck());
		m_listBestPart[3]=floor(100.*(m_dSubjectPart4 + 0.005))/100;
	}

	if(m_CheckP5.GetCheck()+m_CheckP6.GetCheck()+m_CheckP1.GetCheck()+m_CheckS13.GetCheck()+m_CheckS12.GetCheck()==0)
	{
		m_dSubjectPart5=0.0;
		m_listBestPart[4]=m_dSubjectPart5;
	}
	else
	{
		m_dSubjectPart5= (m_nScoreP5+m_nScoreP6+m_nScoreP1+m_nScoreS13+m_nScoreS12) / (m_CheckP5.GetCheck()+m_CheckP6.GetCheck()+m_CheckP1.GetCheck()+m_CheckS13.GetCheck()+m_CheckS12.GetCheck());
		m_listBestPart[4]=floor(100.*(m_dSubjectPart5 + 0.005))/100;
	}

	if(m_CheckS10.GetCheck()+m_CheckS17.GetCheck()+m_CheckS27.GetCheck()+m_CheckS28.GetCheck()==0)
	{
		m_dSubjectPart6=0.0;
		m_listBestPart[5]=m_dSubjectPart6;
	}
	else
	{
		m_dSubjectPart6= (m_nScoreS10+m_nScoreS17+m_nScoreS27+m_nScoreS28) / (m_CheckS10.GetCheck()+m_CheckS17.GetCheck()+m_CheckS27.GetCheck()+m_CheckS28.GetCheck());
		m_listBestPart[5]=floor(100.*(m_dSubjectPart6 + 0.005))/100;
	}

	if(m_CheckS16.GetCheck()+m_CheckS21.GetCheck()+m_CheckS23.GetCheck()+m_CheckS25.GetCheck()+m_CheckS26.GetCheck()+m_CheckS29.GetCheck()==0)
	{
		m_dSubjectPart7=0.0;
		m_listBestPart[6]=m_dSubjectPart7;
	}
	else
	{
		m_dSubjectPart7= (m_nScoreS16+m_nScoreS21+m_nScoreS23+m_nScoreS25+m_nScoreS26+m_nScoreS29) / (m_CheckS16.GetCheck()+m_CheckS21.GetCheck()+m_CheckS23.GetCheck()+m_CheckS25.GetCheck()+m_CheckS26.GetCheck()+m_CheckS29.GetCheck());
		m_listBestPart[6]=floor(100.*(m_dSubjectPart7 + 0.005))/100;
	}

	
	
	
	
	m_listBestPartInt[0]=1;
	m_listBestPartInt[1]=2;
	m_listBestPartInt[2]=3;
	m_listBestPartInt[3]=4;
	m_listBestPartInt[4]=5;
	m_listBestPartInt[5]=6;
	m_listBestPartInt[6]=7;
	

	double MinDelta=0.0001;

	for(int i=0; i<6; i++)
	{
		for(int j=i+1; j<7; j++)
		{

			if((m_listBestPart[i]-m_listBestPart[j])>MinDelta)
			{
				double temp=m_listBestPart[i];
				m_listBestPart[i]=m_listBestPart[j];
				m_listBestPart[j]=temp;

				int temp1=m_listBestPartInt[i];
				m_listBestPartInt[i]=m_listBestPartInt[j];
				m_listBestPartInt[j]=temp1;
			}
		}
	}

	m_nPart1=m_listBestPartInt[6];
	m_nPart2=m_listBestPartInt[5];
	m_nPart3=m_listBestPartInt[4];
	m_nPart4=m_listBestPartInt[3];
	m_nPart5=m_listBestPartInt[2];
	m_nPart6=m_listBestPartInt[1];
	m_nPart7=m_listBestPartInt[0];


	if(m_bViewSolution==false)
	{
		m_dlgSolution.Create(IDD_DIALOG_SOLUTION, this);

		CRect rectMain, rectSolution;
		GetWindowRect(&rectMain);

		m_dlgSolution.GetWindowRect(&rectSolution);
		m_dlgSolution.MoveWindow(rectMain.right, rectMain.top, rectSolution.Width(), rectSolution.Height());

		m_dlgSolution.ShowWindow(SW_SHOW);
		m_bViewSolution=true;
	}
	else
	{
		m_dlgSolution.ShowWindow(SW_HIDE);
		m_dlgSolution.DestroyWindow();
		m_bViewSolution=false;
	}
}


void CProject2Dlg::OnSelchangeComboS30()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if(m_CheckS30.GetCheck()==0)
	{
		//m_ComboS29.Clear();
		AfxMessageBox(_T("���� �̼��� ���� ���� üũ�ڽ��� ��������."));
		//m_ComboS29.Clear();
		
		
	}
	
	else
	{
		if(m_ComboS30.GetCurSel()==0)
		{
			m_nScoreS30=4.5;
		}
		if(m_ComboS30.GetCurSel()==1)
		{
			m_nScoreS30=4.0;
		}
		if(m_ComboS30.GetCurSel()==2)
		{
			m_nScoreS30=3.5;
		}
		if(m_ComboS30.GetCurSel()==3)
		{
			m_nScoreS30=3.0;
		}
		if(m_ComboS30.GetCurSel()==4)
		{
			m_nScoreS30=2.5;
		}
		if(m_ComboS30.GetCurSel()==5)
		{
			m_nScoreS30=2.0;
		}
		if(m_ComboS30.GetCurSel()==6)
		{
			m_nScoreS30=1.5;
		}
		if(m_ComboS30.GetCurSel()==7)
		{
			m_nScoreS30=1.0;
		}
		if(m_ComboS30.GetCurSel()==8)
		{
			m_nScoreS30=0;
		}
		m_ComboS30.Clear();
	}
}
