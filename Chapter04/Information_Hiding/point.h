#ifndef __POINT_H_
#define __POINT_H_
 class Point
 {
  /*
    맴버 변수 x,y를 private로 선언 해서
    외부에서 접근 할수 없도록 했다.
  */
 private:
    int x;
    int y;

 public:
    bool InitMembers(int xpos, int ypos);
    /* x와 y값을 초기화 할 매개변수 xpos, ypos를 전달 받아서 유효성 검사를 실행 --> bool 반환(true, false)
     이상이 없으면(true) 클래스의 맴버변수 x,y를 초기화 한다. */

    int GetX() const;
    int GetY() const;
    /*
     맴버변수 x,y 를 각각 반환 해 주는 Access Function 들로
     const를 붙여서 함수 내에서는 맴버 변수 x, y의 값을 변경 못하게 하였다. */

    bool SetX(int xpos);
    bool SetY(int ypos);

    /*
       맴버 변수 x, y를 각각 따로 초기화 하기 위한 Access Function
        --> 유효성 검사 한 후에 bool 값을 반환 한다.
    */
 };
#endif // __POINT_H__

