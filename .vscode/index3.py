class Super:

  def __init__(self, a, b):

   print ("1")

   self.__a=a

   self.b = b

  def m1(self):

   print ("m1")

  def m2(self):

    print ("m2")

class Super2(Super):

    def m1(self):

      print ("2")

      super().m1()

s=Super2(20,13)

s.m1()