// SolutionDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "Project2.h"
#include "SolutionDlg.h"
#include "afxdialogex.h"
#include "Project2Dlg.h"


// CSolutionDlg 대화 상자입니다.

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


// CSolutionDlg 메시지 처리기입니다.


void CSolutionDlg::OnClickedButtonSolution()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CProject2Dlg *pProject2Dlg = (CProject2Dlg *)AfxGetMainWnd();
	
if(pProject2Dlg->m_nPart1==1)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==2)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==3)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==4)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==5)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==6)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str1);
	}
	else if(pProject2Dlg->m_nPart1==7)
	{
		CString str1;
		str1.Format(_T("이 학생이 가장 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str1);
	}

	if(pProject2Dlg->m_nPart2==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart2==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 두번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}
	
	if(pProject2Dlg->m_nPart3==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart3==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 세번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}
	

	
	if(pProject2Dlg->m_nPart4==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart4==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 네번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}
	
	
	if(pProject2Dlg->m_nPart5==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart5==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 다섯번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}

	if(pProject2Dlg->m_nPart6==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart6==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 여섯번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}

	if(pProject2Dlg->m_nPart7==1)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 수학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==2)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 프로그래밍분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==3)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 공학분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==4)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 컴퓨터이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==5)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 프로그래밍이론분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==6)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 네트워크분야입니다."));
		m_listSolution.AddString(str2);
	}
	else if(pProject2Dlg->m_nPart7==7)
	{
		CString str2;
		str2.Format(_T("이 학생이 일곱번째로 잘하는 분야는 산업기술분야입니다."));
		m_listSolution.AddString(str2);
	}


	CString str;
	for(int i=0; i< pProject2Dlg->m_ListWill.GetCount(); i++)
	{
		pProject2Dlg->m_ListWill.GetText(i, str);
		m_ListSolutionsub.AddString(str);
	}
	

	CString str111;
	str111.Format(_T("앞으로 들을 예정인 과목들에서 취득해야 할 평균 학점 : %f"), pProject2Dlg->m_dLeavescore);
	m_ListSolutionscore.AddString(str111);
	

	CString str1;
	str1.Format(_T("수학분야 : 이산수학, 선형대수학, 확률과통계, 수치해석"));
	m_ListSolutionscore.AddString(str1);

	CString str11;
	str11.Format(_T(" 확률과통계, 수치해석"));
	m_ListSolutionscore.AddString(str11);

	CString str2;
	str2.Format(_T("프로그래밍분야 : c++프로그래밍, JAVA프로그래밍, 윈도우즈프로그래밍, 알고리즘, 유닉스시스템프로그래밍, "));
	m_ListSolutionscore.AddString(str2);


	CString str22;
	str22.Format(_T("모바일프로그래밍, 웹프로그래밍"));
	m_ListSolutionscore.AddString(str22);

	

	CString str3;
	str3.Format(_T("공학분야 : 창의적공학설계입문, 디지털시스템설계, 마이크로프로세서응용설계, 소프트웨어개발프로젝트, "));
	m_ListSolutionscore.AddString(str3);

	CString str31;
	str31.Format(_T("멀티미디어응용"));
	m_ListSolutionscore.AddString(str31);

	CString str4;
	str4.Format(_T("프로그래밍이론분야 : 프로그래밍언어론, 소프트웨어공학, 자료구조, 데이터베이스, 컴파일러"));
	m_ListSolutionscore.AddString(str4);

	CString str5;
	str5.Format(_T("컴퓨터이론분야 : 컴퓨터공학총론, 컴퓨터구조, 프로그램의구조와해석, 파일구조, 운영체제"));
	m_ListSolutionscore.AddString(str5);

	CString str6;
	str6.Format(_T("네트워크분야 : 데이터통신, 컴퓨터네트워크, 정보검색, 정보보호"));
	m_ListSolutionscore.AddString(str6);

	CString str7;
	str7.Format(_T("산업기술분야 : 컴퓨터그래픽스, 영상처리, 임베디드컴퓨팅, 분산컴퓨팅, 인공지능, 기계학습"));
	m_ListSolutionscore.AddString(str7);

	
}


//void CSolutionDlg::OnLbnSelchangeListSolutionsub()
//{
//	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
//}
