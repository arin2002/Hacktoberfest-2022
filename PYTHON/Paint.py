import tkinter as tk
from tkinter.colorchooser import askcolor


class PaintApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Simple Paint App")
        self.root.geometry("800x600")
        
        self.color = "black"
        self.pen_size = 5
        self.prev_x, self.prev_y = None, None

        self.canvas = tk.Canvas(root, bg="white", bd=5, relief="ridge")
        self.canvas.pack(fill=tk.BOTH, expand=True)

        self.color_button = tk.Button(root, text="Choose Color", command=self.choose_color)
        self.color_button.pack(pady=10)

        self.size_label = tk.Label(root, text="Pencil Size:")
        self.size_label.pack()
        self.size_slider = tk.Scale(root, from_=1, to=20, orient=tk.HORIZONTAL, command=self.update_size)
        self.size_slider.set(self.pen_size)
        self.size_slider.pack()

        self.canvas.bind("<B1-Motion>", self.paint)
        self.canvas.bind("<ButtonRelease-1>", self.reset)

    def choose_color(self):
        color = askcolor()[1]
        if color:
            self.color = color

    def update_size(self, val):
        self.pen_size = int(val)

    def paint(self, event):
        x, y = event.x, event.y
        if self.prev_x and self.prev_y:
            self.canvas.create_line(self.prev_x, self.prev_y, x, y, fill=self.color, width=self.pen_size)
        self.prev_x, self.prev_y = x, y

    def reset(self, event):
        self.prev_x, self.prev_y = None, None


if __name__ == "__main__":
    root = tk.Tk()
    app = PaintApp(root)
    root.mainloop()
