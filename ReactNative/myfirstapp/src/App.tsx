import {
  View,
  Text,
  SafeAreaView,
  StyleSheet,
  TouchableOpacity,
  Button,
  Alert,
} from 'react-native';
import React from 'react';
import Card from './components/card/Card';

export default function App() {
  const employeeList = [
    {
      name: 'Onur Sercan Yılmaz',
      position: 'Software Engineer',
    },

    {
      name: 'Jane Doe',
      position: 'Software Engineer',
    },

    {
      name: 'John Smith',
      position: 'Software Engineer',
    },
  ];
  return (
    <SafeAreaView style={styles.container}>
      {employeeList.map((employee: any) => (
        <Card
          styles={styles}
          cardDescription={employee.position}
          cardTitle={employee.name}
          buttonText={'+ ADD'}
          onPress={() => Alert.alert(employee.name + ' added!')}
        />
      ))}
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#e0e0e0',
    alignItems: 'center',
    justifyContent: 'center',
  },
  card_container: {
    backgroundColor: '#fff',
    width: '90%',
    borderWidth: 1,
    borderColor: 'grey',
    borderRadius: 10,
    margin: 10,
  },
  card_body: {
    padding: 10,
  },
  card_title: {
    fontSize: 30,
    fontWeight: 'bold',
    margin: 10,
    marginBottom: 0,
  },
  card_text: {
    fontSize: 20,
    margin: 10,
    marginTop: 5,
  },
  button_container: {
    backgroundColor: 'aqua',
    padding: 10,
    alignItems: 'center',
    borderBottomEndRadius: 10,
    borderBottomStartRadius: 10,
  },
  button: {
    fontWeight: 'bold',
    color: '#fff',
    fontSize: 20,
  },
});
