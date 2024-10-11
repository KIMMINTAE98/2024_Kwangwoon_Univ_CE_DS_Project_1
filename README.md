# 2024_Kwangwoon_Univ_CE_DS_Project_1

Please read Update Notes regularly before proceeding with the task and check for any updates before proceeding.

## Update Notes
### 2024-09-16 : 
initial upload
### 2024-10-11 :
참고사항 공지
- command 파일의 모든 명령어 끝은 마지막 문자 기준 공백문자 없이 개행문자로 되어있다고 가정해주시기 바랍니다. 
  (스켈레톤 코드 command.txt 파일의 SECTION 명령어 라인 마지막 공백문자 X)
- Queue 예외처리의 경우 (full일때 push/empty일때 pop), 프로그램이 종료되게 하거나 에러코드를 출력하는 방식 모두 가능하며,
  그에 따라, 이후 명령어도 실행되지 않고 종료되거나, 실행되어 에러코드를 출력하는 방식 모두 가능합니다.

## How to Clone Repository
```
sudo apt-get install git
git clone https://github.com/KIMMINTAE98/2024_Kwangwoon_Univ_CE_DS_Project_1.git
```
## How to Build and Run
```
cd src
make
./run
```

## Q & A
If you have some questions, you can use Issues tab on the top of this documents.

## About Implementation of the Program
In implementing the program, you can modify the Skeleton Code freely.

The function's name and factor data format and class structure are also freely changeable.

However, please check the requirements in the assignment specification carefully.

Please note that the Skeleton Code is for reference only and does not guarantee a successful build of the project.

## Ubuntu Settings
1. change font size : 
gsettings set org.gnome.desktop.interface text-scaling-factor <ratio><br/>
ex. gsettings set org.gnome.desktop.interface text-scaling-factor 1      (default)<br/>
ex. gsettings set org.gnome.desktop.interface text-scaling-factor 1.5<br/>
