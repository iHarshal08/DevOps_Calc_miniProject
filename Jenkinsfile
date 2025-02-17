pipeline {
    agent any
    stages {
        stage('Clone Repository') {
            steps {
              git branch: 'main', credentialsId: 'github-credentials', url: 'https://github.com/iHarshal08/DevOps_Calc_miniProject.git'
            }
        }
        stage('Build') {
            steps {
                sh 'g++ calculator.cpp -o calculator'
            }
        }
        stage('Run Tests') {
            steps {
                sh './calculator'
            }
        }
        stage('Docker Build') {
            steps {
                sh 'docker build -t my-calculator .'
            }
        }
        stage('Push to Docker Hub') {
            steps {
                withDockerRegistry([credentialsId: 'docker-hub-credentials', url: '']) {
                    sh 'docker tag my-calculator iharshal08/my-calculator:latest'
                    sh 'docker push iharshal08/my-calculator:latest'
                }
            }
        }
    }
}

