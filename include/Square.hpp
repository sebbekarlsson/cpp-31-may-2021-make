class Square {
    public:
        Square(int width, int height);


        const Square& operator+(Square b);

        int getWidth();
        int getHeight();

    private:
        int width;
        int height;
};