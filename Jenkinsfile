pipeline {
    agent { docker { image 'f29bms' } }
    stages {
        stage('build') {
            steps {
                sh 'git submodule update --init --recursive'
                sh './build.sh'
            }
        }
    }
}