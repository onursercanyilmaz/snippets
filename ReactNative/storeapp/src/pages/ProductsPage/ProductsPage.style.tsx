import {StyleSheet} from 'react-native';

export default StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
  },
  header: {
    flexDirection: 'row',
    flex: 1,
    minHeight: 150,
    backgroundColor: '#fff',
    borderBottomWidth: 1,
    borderBottomColor: '#ddd',
    justifyContent: 'space-between',
    alignItems: 'center',
    paddingHorizontal: 20,
  },
  headerText: {
    fontWeight: 'bold',
    fontSize: 15,
    color: '#333',
  },
  headerIcon: {
    width: 30,
    height: 30,
  },
  listItem: {
    flex: 1,
    padding: 20,
    borderBottomWidth: 1,
    borderBottomColor: '#ddd',
    flexDirection: 'row',
    justifyContent: 'space-between',
    alignItems: 'center',
    minHeight: 200,
  },
  listItemTitle: {
    fontSize: 18,
    color: '#333',
    flex: 1,
    margin: 10,
  },
  listItemPrice: {
    fontWeight: 'bold',
    backgroundColor: '#ddd',
    fontSize: 18,
    color: '#333',
    flex: 1,
    margin: 10,
    textAlign: 'right',
  },
  listItemIcon: {
    width: 50,
    height: 50,
    borderRadius: 50,
  },
});
