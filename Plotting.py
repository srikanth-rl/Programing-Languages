import matplotlib.pyplot as plt,numpy as np,matplotlib.style as style
plt.plot([1,2,4],[0,-5,6])
plt.title('Eg. Graph')
plt.show()

style.use('Solarize_Light2')

x = np.arange(0, 5*np.pi, 0.1)
y=np.sin(x)
print('Sin wave:\t(Values)\n',*zip(x,y))
plt.plot(x,y,'g',label='Sin fn',linewidth=5)
y2 = np.cos(x)
plt.plot(x,y2,'c',label='Cos fn',linewidth=5)

plt.title('Sin & Cos')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.grid(True)
plt.show()

style.use('grayscale')
x = np.linspace(0, 10000)
y=np.tan(x)
plt.plot(x,y)

plt.title('Tan fn')
plt.xlabel('x')
plt.ylabel('y')
plt.stem(x,y)
plt.show()