#ifndef SMART_POINTER_HPP
#define SMART_POINTER_HPP

namespace enseirb{  

  class SmartPointer{
  private:
    char *_data;
    int  *_counter;
    
    void releasePointer();
    const SmartPointer &operator=(char *data);
    
  public:
    SmartPointer();
    
    SmartPointer(const char *data);
    
    SmartPointer(const SmartPointer &p);

    ~SmartPointer();

    char *operator->();
    char &operator*();
    const char *operator->()const ;
    const char &operator*()const;

    const SmartPointer &operator=(const SmartPointer &p);

    operator char *();
    operator const char *() const ;

    const char * get() const;
    char * get() ;
  };
}

#endif
