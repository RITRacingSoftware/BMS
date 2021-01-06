pipeline {
    agent { 
        docker { 
            image 'f29bms' 
            args '-u root:root'
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
    post { 
        always { 
            cleanWs()
        }
    }
}