// SolutionDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Project2.h"
#include "SolutionDlg.h"
#include "afxdialogex.h"
#include "Project2Dlg.h"


// CSolutionDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CSolutionDlg, CDialogEx)

CSolutionDlg::CSolutionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSolutionDlg::IDD, pParent)
{

}

CSolutionDlg::~CSolutionDlg()
{
}

void CSolutionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_SOLUTIONSUB, m_ListSolutionsub);
	DDX_Control(pDX, IDC_LIST_SOLUTIONSCORE, m_ListSolutionscore);
	DDX_Control(pDX, IDC_LIST_SOLUTION, m_listSolution);
}


BEGIN_MESSAGE_MAP(CSolutionDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SOLUTION, &CSolutionDlg::OnClickedButtonSolution)
//	ON_LBN_SELCHANGE(IDC_LIST_SOLUTIONSUB, &CSolutionDlg::OnLbnSelchangeListSolutionsub)
END_MESSAGE_MAP()


// CSolutionDlg �޽��� ó�����Դϴ�.


void CSolutionDlg::OnClickedButtonSolution()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CProject2Dlg *pProject2Dlg = (CProject2Dlg *)AfxGetMainWnd();
	
if(pProject2Dlg->m_nPart1==1)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==2)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==3)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==4)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==5)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==6)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==7)
	{
		CString str1;
		str1.Format(_T("�� �л��� ���� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str1);
	}

	if(pProject2Dlg->m_nPart2==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ι�°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	
	if(pProject2Dlg->m_nPart3==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� ����°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	

	
	if(pProject2Dlg->m_nPart4==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� �׹�°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	
	
	if(pProject2Dlg->m_nPart5==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ټ���°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}

	if(pProject2Dlg->m_nPart6==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� ������°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}

	if(pProject2Dlg->m_nPart7==1)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==2)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ���α׷��ֺо��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==3)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ���ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==4)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ��ǻ���̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==5)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ���α׷����̷ко��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==6)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� ��Ʈ��ũ�о��Դϴ�."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==7)
	{
		CString str2;
		str2.Format(_T("�� �л��� �ϰ���°�� ���ϴ� �оߴ� �������о��Դϴ�."));
		m_listSolution.AddString(str2);
	}


	CString str;
	for(int i=0; i< pProject2Dlg->m_ListWill.GetCount(); i++)
	{
		pProject2Dlg->m_ListWill.GetText(i, str);
		m_ListSolutionsub.AddString(str);
	}
	

	CString str111;
	str111.Format(_T("������ ���� ������ ����鿡�� ����ؾ� �� ��� ���� : %f"), pProject2Dlg->m_dLeavescore);
	m_ListSolutionscore.AddString(str111);
	

	CString str1;
	str1.Format(_T("���ко� : �̻����, ���������, Ȯ�������, ��ġ�ؼ�"));
	m_ListSolutionscore.AddString(str1);

	CString str11;
	str11.Format(_T(" Ȯ�������, ��ġ�ؼ�"));
	m_ListSolutionscore.AddString(str11);

	CString str2;
	str2.Format(_T("���α׷��ֺо� : c++���α׷���, JAVA���α׷���, �����������α׷���, �˰���, ���н��ý������α׷���, "));
	m_ListSolutionscore.AddString(str2);


	CString str22;
	str22.Format(_T("��������α׷���, �����α׷���"));
	m_ListSolutionscore.AddString(str22);

	

	CString str3;
	str3.Format(_T("���ко� : â�������м����Թ�, �����нý��ۼ���, ����ũ�����μ������뼳��, ����Ʈ�����������Ʈ, "));
	m_ListSolutionscore.AddString(str3);

	CString str31;
	str31.Format(_T("��Ƽ�̵������"));
	m_ListSolutionscore.AddString(str31);

	CString str4;
	str4.Format(_T("���α׷����̷ко� : ���α׷��־���, ����Ʈ�������, �ڷᱸ��, �����ͺ��̽�, �����Ϸ�"));
	m_ListSolutionscore.AddString(str4);

	CString str5;
	str5.Format(_T("��ǻ���̷ко� : ��ǻ�Ͱ����ѷ�, ��ǻ�ͱ���, ���α׷��Ǳ������ؼ�, ���ϱ���, �ü��"));
	m_ListSolutionscore.AddString(str5);

	CString str6;
	str6.Format(_T("��Ʈ��ũ�о� : ���������, ��ǻ�ͳ�Ʈ��ũ, �����˻�, ������ȣ"));
	m_ListSolutionscore.AddString(str6);

	CString str7;
	str7.Format(_T("�������о� : ��ǻ�ͱ׷��Ƚ�, ����ó��, �Ӻ������ǻ��, �л���ǻ��, �ΰ�����, ����н�"));
	m_ListSolutionscore.AddString(str7);

	
}


//void CSolutionDlg::OnLbnSelchangeListSolutionsub()
//{
//	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
//}
