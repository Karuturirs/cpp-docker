FROM gcc:4.9

COPY . /home
WORKDIR /home
RUN g++ -o shift src/*
CMD ["./shift"]
