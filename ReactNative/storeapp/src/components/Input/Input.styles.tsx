import { Dimensions, StyleSheet } from 'react-native';

export default StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    padding: 20,
    backgroundColor: '#000',
  },

  label: {
    color: '#fff',
    fontSize: 20,
    fontWeight: 'bold',
    marginBottom: 10,
  },

  textInput: {
    backgroundColor: '#131213',
    marginVertical: 5, // Adjusted the margin to reduce vertical space
    padding: 10,
    borderRadius: 10,
    color: '#fff',
    width: Dimensions.get('window').width - 40,
    height: 50,
    alignSelf: 'center',
    fontSize: 16,
  },
});
