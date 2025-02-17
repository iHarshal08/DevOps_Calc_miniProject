# Use an official C++ runtime as a parent image
FROM gcc:latest
WORKDIR /app
COPY calculator.cpp .
RUN g++ calculator.cpp -o calculator
CMD ["./calculator"]

