#include <opencv2/opencv.hpp>

int main() {
    // Load the pre-trained face detection model
    cv::CascadeClassifier faceCascade;
    if (!faceCascade.load("haarcascade_frontalface_default.xml")) {
        std::cerr << "Error loading face detection model." << std::endl;
        return -1;
    }

    // Initialize the video capture
    cv::VideoCapture cap(0); // 0 represents the default camera

    if (!cap.isOpened()) {
        std::cerr << "Error opening camera." << std::endl;
        return -1;
    }

    cv::Mat frame;
    cv::namedWindow("Face Detection", cv::WINDOW_NORMAL);

    while (true) {
        cap >> frame;

        if (frame.empty()) {
            std::cerr << "End of video stream." << std::endl;
            break;
        }

        // Convert the frame to grayscale for face detection
        cv::Mat gray;
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        // Detect faces in the frame
        std::vector<cv::Rect> faces;
        faceCascade.detectMultiScale(gray, faces, 1.1, 3, 0, cv::Size(30, 30));

        // Draw rectangles around detected faces
        for (const cv::Rect& face : faces) {
            cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2);
        }

        // Display the frame with detected faces
        cv::imshow("Face Detection", frame);

        // Break the loop on 'q' key press
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cv::destroyAllWindows();
    cap.release();
    return 0;
}
