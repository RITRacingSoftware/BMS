pipeline {
    agent { 
        docker { 
            image 'f29bms' 
        } 
    }
    stages {
        stage('build') {
            steps {
                sh './build.sh'
                archiveArtifacts 'sim_traces/*'
            }
        }
    }
}